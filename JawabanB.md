# Jawaban B
## DASAR PEMROGRAMAN
### 1. Ada beberapa konsep utama pada OOP:
### - **Class** = merupakan template utama untuk pembuatan objek
        class Person {
        public:
        std::string name;
        void sayHi() const { std::cout << "halo gaes, nama gue " << y/n << "\n"; }
    };
    +) contoh ini menjelaskan bahwa templatenya bernama SayHi adalah "halo gais, nama gue adalah", dan y/n adalah objeknya
### - **Object** = merupakan contoh-contoh komponen yang ada pada suatu class
        Person p;      
        p.y/n = "sansuryo";
        p.sayHi();     
        +) anggap p.y/n adalah nama asli dari y/n dan p.sayHi adalah panggilan ke fungsinya.
### - **Abstraction** = Merupakan komponen yang menyembunyikan detail-detail tertentu (private), dan hanya memperlihatkan fungsi-fungsi tertentu (publik) hanay kodingan untuk publik saja yang ditulis.
        class Counter {
        public:
            int norek; 
### - **Encapsulation** = merupakan komponen yang membungkus data, dan mempersiapkan apakah data ini akan dipublikasikan atau disimpan pribadi
        class Counter {
        private:
            int value;          
        public:
            int norek;
        };
### - **Inheritance** = komponen yang memastikan suatu class memiliki properti dan perintah yang sama seperti class sebelumnya
        class hewan {
        public:
        void bernapas()
        class babi : public hewan {
        public:
        void makan()
        +) artinya, selain bernapas babi juga makan.
### - **Polymorphism** = komponen yang membuat beberapa class yang berbeda memiliki properti dan perintah yang sama, layaknya _warisan_
        class hewan {
        public:
            virtual void bernapas()
            virtual ~hewan() = default;
        };
        
        class babi : public hewan {
        public:
            void makan() 
        };
        
        hewan* a = new babi();
        a->makan(); 
        delete a;
        +) artinya ada hewan lainnya/ ada class lain, masih bisa dianggap seperti babi (ini yang untuk kali ini saya pahami).

### 2. Mendefinisikan beberapa konsep C++
#### - #include <file_name> dan #include "file_name" = Menginklusi berbagai file tertentu kedalam kodingan. <> biasanya digunakan untuk memanggil library dan "" digunakan untuk memanggil file-file tertentu.
#### - **#ifdef** adalah perintah kondisional yang berfungsi pada suatu _define_. Jika define suatu variabel sudah ter-defined, maka ifdef akan mengaktifkan perintah selanjutnya. **ifndef** aktif jika suatu variabel tidak ter-defined, dia akan mengaktifkan perintah selanjutnya. **endif** adalah command untuk menyelesaikan perintah kondisional. Yang terakhir, **#pragma** adalah perintah yang hanya dapat dilihat oleh preprocessor yang isinya mengenai informasi tertentu.
#### - **scope resolution operator (::)** adalah command yang dapat dianggap _penanda_. Contoh; ada 
        **std::cout<<hai guys** 
Dia menandakan suatu bahwa suatu name berupa std, merupakan bagian dari suatu namespace std. << lebih semacam perintah untuk menghasilkan suatu output. Output yang ada pada contoh tersebut adalah << memerintahkan untuk menghasilkan "hai guys". **Namespace**, seperti namanya, mendefinisikan kumpulan library yang berisi banyak name.
#### - **Define** merupakan perintah untuk mendefinsikan nilai suatu variabel. Misalnya, 
                #define pi = 3.14
####   Lalu, **using** merupakan perintah untuk menyatakan jenis namespace, sehingga tidak perlu lagi mendefinisikan panjang-panjang seperti pada scope resolution operator
        using namespace std
        cout<<hai guys
#### jika kita hanya ingin menggunakan _std::cout_ saja, maka kita harus menulis std berkali-kali. Using memudahkan dengan menyatakan bahwa name yang dipanggil akan terus berasal dari namespace yang sama.

#### - **pointer (*)** merupakan command variabel yang menyimpan data variabel lain.
        int* ptr
        artinya integer menyimpan memori dari ptr
**adressoff (&)** merupakan command yang meminta suatu variabel untuk pergi ke suatu lokasi variabel.
        int* ptr = &x
        artinya integer mencari dahulu lokasi x, lalu disitu akan diubah data x jadi data ptr.
#### - **pass by value** adalah variabel dari suatu fungsi. Sehingga, akan memodifikasi suatu variabel copy. **Pass by reference** adalah suatu variabel referensi (ditandai dengan &) yang akan mmemodifikasi nilai original.
#### - **unique_ptr** adalah perintah untuk objek yang hanya memiliki kepemilikan tunggal dan tidak bisa dibagi-bagikan ke orang lain. **shared_ptr** adalah perintah untuk objek yang dapat "dibagi-bagi".

### 3. Multithreading adalah kemampuan sebuah program untuk menjalankan beberapa bagian kode secara bersamaan.
#### i. Berbagai definisi konsep multithreading
       Thread = urutan algoritma perintah
       Multitasking = istilah untuk menjalankan berbagai perintha secara bersamaan.
       conccurency = kondisi dimana thread selanjutnya bekerja setelah thread sebelumnya selesai.
       paralelisme = eksekusi bersamaan dari dua atau lebih thread
       sinkronisasi = konsep untuk mengatur kerja thread agar tidak terjadi kegiatan paralelisme yg berlebihan sehingga membuat CPU kewalahan
       deadlock = kondisi dimana thread selanjutnya tidak berjalan karena thread sebelumnya di-block/dihentikan, sehingga tidak ada input lanjutan.
       race condition = kondisi ketika berbagai thread mencoba untuk bekerja bersamaan, yang menyebabkan error.
       thread pool = berbagai thread yang siap untuk bekerja
       global interpreter lock (GIL) = mekanisme untuk menghindari akses bersamaan ke objek dari thread yang berbeda
       thread safety = Jika GIL menghindar maka thread safety memastikan agar objek yang diakses berbagai thread dieksekusi dengan aman.
#### ii. Kodingan ada di lampiran
### 4. Perhatikan file [ini](https://github.com/eizi1234/CaRSC26_THT_13324106/blob/main/lampiran/pipeline_parser.hpp) dan [ini](https://github.com/eizi1234/CaRSC26_THT_13324106/blob/main/lampiran/vision_to_mavros.hpp). 
#### i. Ada beberapa perbedaan sederhana yang dapat dilihat dalam konteks header:
#### - **#include** = _pipeline_parscher_ memanggil berbagai file dari internal ("") dan dari library (<>) dengan #include. Tetapi, _vision_to_mavros_ hanya memanggil file dari library (<>) dengan #include.
#### - **inheritance**, **::**, dan **encapsulation** = pada _pipeline_parscher_, dia hanya memanggil namespace dan name yg dipanggil. Akan tetapi, _vision_to_mavros_ menggunakan _inheritance_ agar dapat mengklasifikan variabel baru, lalu menandakannya (::) dengan vector dari std.
#### ii. Kedua file doxygen ini dibuat melalui software doxygen itu sendiri. Kedua file terlampir pada file lampiran.
### 5. Firmware dan sistem benam
#### i. Jika software adalah perangkat lunak dalam dunia maya, **Firmware** adalah suatu komponen software/perangkat lunak didalam suatu hardware spesifik, anggaplah sudah satu paket. Mereka bekerja untuk suatu hal spesifik tertentu. Fungsi **firmware dalam UAV** adalah kemampuan perangkat lunaknya (firmwware) untuk langsung berinteraksi dengan perangkat kerasnya (hardware), sehingga lebih mudah untuk menentukan berbagai macam variabel telemetri.
#### ii. Seperti namanya, **Real Time Operating System** adalah sistem (bukan program yang menghasilkan output spesifik) yang memastikan bahwa suatu program menghasilkan variabel atau output dengan tepat waktu. Maka dari itu, RTOS lekat dengan karateristik determinismenya yang memastikan ketepatan waktu dala menghasilkan outout dalam suatu sistem. **UAV** dan **RTOS** mengatur berbagai keamanan, seperti: kontrol terbang dan hasil telemetri avionik.
#### iii. Ada beberapa konsep dasar dari dasar komunikasi serial yang dijelaskan secara komprehensif oleh [sumber](https://www.rfwireless-world.com/terminology/uart-vs-spi-vs-i2c-comparison) berikut:
##### - **Universal Asynchronous Receiver/Transmitter** = merupakan protokol komunikasi antar 2 alat yang keduanya saling men-transmisi dan menerima daya satu sama lain. Receiver (Rx) biasanya harus mengetahui terlebih dahulu baud rate dari Transmitter (Tx) sebelum komunikasi dimulai. Pada UAV, biasanya digunakan untuk **mengirim** berbagai **variabel** **telemetri**. <img width="577" height="344" alt="image" src="https://github.com/user-attachments/assets/b2b43433-cbc0-492e-9a7c-fc2ca586e9ab" />

##### - **Inter-Integrated Circuit** = protokol komunikasi 2 arah yang memanfaatkan _serial data line_ (SDA) dan _Serial Clock Line_ (SCL). Biasanya digunakan untuk **mengintegrasi sensor**.
<img width="553" height="570" alt="image" src="https://github.com/user-attachments/assets/a860d2d2-dbd5-4b2d-9819-aa7bf5623ec9" />

##### - **Serial Periperal Interface** = protokol komunikasi yang memanfaatkan banyak pin: Serial Clock_(SCL), _Master Output, Slave Input_ (MOSI), _Master Input_ _Slave Output_ (MISO), _Slave Select_ (SS). Hal ini membuat protokol komunikasi ini sering digunakan untuk menerima data telemetri. Dia dianggap lebih kompeten dibanding Inter-Integrated Circuit (I2C). <img width="581" height="521" alt="image" src="https://github.com/user-attachments/assets/a17f0c5f-7f23-49a4-83e0-202f85d222c6" />

### 6. Jurusan Control and Perception (ConCept)

