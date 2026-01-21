#program ini dibuat dari berbagai sumber di internet dan dimodifikasi (sayangnya hanya sedikit) sesuai kebutuhan
import threading
import time

def video_thread(stop_event): #bikin fungsi/ thread pertama
    """Simulasi menerima frame video setiap 2 detik."""
    while not stop_event.is_set():
        print("[Video] Receiving video frame...")
        # tunggu sampai 2 detik atau sampai stop_event diset
        if stop_event.wait(2.0):
            break

def telemetry_thread(stop_event, filename): #bikin fungsi/ thread kedua
    """cetak tiap baris setiap 3 detik (siklus) dari file"""
    try:
        with open(filename, "r") as f:
            lines = [line.strip() for line in f if line.strip()] #memaca file dan menghapus spasi
    except Exception as e:
        print(f"[Telemetry] Gagal membaca {filename}: {e}")
        return

    if not lines:
        print("[Telemetry] Tidak ada data di file.")
        return
# loop siklus
    i = 0 #indeks awal
    n = len(lines) # jumlah baris
    while not stop_event.is_set():#selama loop berjalan (berhenti hanya dari waktu)
        print(f"[Telemetry] {lines[i]}") #print text diatas
        i = (i + 1) % n
        if stop_event.wait(3.0): #saat waktu habis, loop berhenti
            break

def main():
    filename = "telemetry.txt"
    stop_event = threading.Event()

    t_video = threading.Thread(target=video_thread, args=(stop_event,))
    t_tele = threading.Thread(target=telemetry_thread, args=(stop_event, filename))

    print("Mulai program. Akan berjalan selama 10 detik...\n")
    t_video.start()
    t_tele.start()

    # Jalankan selama 10 detik
    try:
        time.sleep(10.0)
    except KeyboardInterrupt:
        print("Dihentikan oleh user.")
        
    # Minta kedua thread berhenti dan tunggu mereka selesai
    stop_event.set()
    t_video.join()
    t_tele.join()

    print("\nProgram selesai.")

if __name__ == "__main__":
    main()