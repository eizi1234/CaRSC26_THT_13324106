#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // 1. Memuat video circle.mp4
    cv::VideoCapture cap("./circle.mp4");
    if (!cap.isOpened()) {
        std::cout << "Error: Video tidak dapat dibuka!" << std::endl;
        return -1;
    }

    // Mendapatkan properti video untuk output
    int frame_width = cap.get(cv::CAP_PROP_FRAME_WIDTH);
    int frame_height = cap.get(cv::CAP_PROP_FRAME_HEIGHT);
    cv::VideoWriter video_out("hasil_tracking_lingkaran.avi", cv::VideoWriter::fourcc('M','J','P','G'), 30, cv::Size(frame_width, frame_height));

    cv::Mat frame, hsv, mask;

    while (cap.read(frame)) {
        // 2. Masking untuk warna lingkaran (Contoh: mencari warna biru)
        cv::cvtColor(frame, hsv, cv::COLOR_BGR2HSV);
        // Sesuaikan range warna ini dengan warna lingkaran di video Anda
        cv::inRange(hsv, cv::Scalar(0, 100, 100), cv::Scalar(10, 255, 255), mask);

        // 3. Membuat Contours
        std::vector<std::vector<cv::Point>> contours;
        cv::findContours(mask, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

        for (const auto& contour : contours) {
            if (cv::contourArea(contour) > 500) { // Filter noise kecil
                // 4. Menggambarkan Bounding Box
                cv::Rect boundingRect = cv::boundingRect(contour);
                cv::rectangle(frame, boundingRect, cv::Scalar(0, 255, 0), 2);
                cv::putText(frame, "Target Terdeteksi", cv::Point(boundingRect.x, boundingRect.y - 10), 
                            cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 2);
            }
        }

        // Simpan frame ke video baru
        video_out.write(frame);
    }

    std::cout << "Tracking Selesai! Cek file: hasil_tracking_lingkaran.mp4" << std::endl;
    cap.release();
    video_out.release();
    return 0;
}