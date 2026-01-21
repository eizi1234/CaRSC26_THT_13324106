#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Memuat gambar (pastikan file gambar ada di folder yang sama)
    cv::Mat image = cv::imread("gambar_bebas.jpg");
    
    if(image.empty()) {
        std::cout << "Gambar tidak ditemukan!" << std::endl;
        return -1;
    }
    // Lanjutkan ke transformasi....
    // 1. Transformasi: Membuat gambar menjadi Hitam Putih (Grayscale)
    cv::Mat hasil;
    cv::cvtColor(image, hasil, cv::COLOR_BGR2GRAY);

    // 2. Transformasi Tambahan: Deteksi Tepi (Canny Edge) agar terlihat teknis
    cv::Canny(hasil, hasil, 100, 200);

    // 3. Menyimpan hasil transformasi ke file baru
    bool isSaved = cv::imwrite("hasil_tugas_aksantara.jpg", hasil);

    if(isSaved) {
        std::cout << "Transformasi berhasil! Cek file: hasil_tugas_aksantara.jpg" << std::endl;
    } else {
        std::cout << "Gagal menyimpan gambar." << std::endl;
    }

    return 0;
}
