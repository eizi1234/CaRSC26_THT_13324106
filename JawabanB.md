# Jawaban B
### 1. DASAR PEMROGRAMAN
### i. Ada beberapa konsep utama pada OOP:
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

### ii. Pada intinya, yang saya pahami adalah mengubah file telemetry tersebut untuk dilakukan OOP. Kemudian, saya harus mengidentifikasi manakah tipe design pattern yang cocok. Dalam hal ini, terutama setelah bertanya ke AI, lebih baik digunakan **strategic pattern** karena ini memungkinan drone untuk berubah-ubah strategi tanpa menggangu algoritma utama. Intinya yang saya pahami, drone **memiliki lebih banyak kemampuan **ketika pemrograman untuk berjalan dengan bikin drone menjadi lebih "pintar".
_semuanya sudah ada di file lampiran_

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

##### - **Serial Periperal Interface** = protokol komunikasi yang memanfaatkan banyak pin: Serial Clock_(SCL), _Master Output, Slave Input_ (MOSI), _Master Input_ _Slave Output_ (MISO), _Slave Select_ (SS). Hal ini membuat protokol komunikasi ini sering digunakan untuk menerima data telemetri. Dia dianggap lebih kompeten dibanding Inter-Integrated Circuit (I2C). 
<img width="581" height="521" alt="image" src="https://github.com/user-attachments/assets/a17f0c5f-7f23-49a4-83e0-202f85d222c6" />

### 6. Jurusan Control and Perception (ConCept)
#### i. Konsep-konsep dasar pada ROS 2 Humble :
#### - **Nodes** = merupakan komponen utama pada ROS 2 Graph. Untuk memahaminya, biasanya saya membayangkan nodes sebagai sebuah wire dari rangkaian listrik, yaitu merupakan kerangka utama dari ROS 2 graph. Jika dia tidak ada, nanti rangkaiannya short semua / ga jalan. Nodes memiliki berbagai fitur, seperti: publish, subscribe, dll.
#### - **Topics** = merupakan komponen publisher atau subscribe. Biasanya digunakan untuk **streaming**.
#### - **Actions** = adalah prosedur untuk melakukan sesuatu dengan feedback dan kemampuan untuk membatalkan _action_ sebelumnya.
#### - **Services** = biasanya merupakan pemanggilan prosedur antar satu node ke node yang lain. Intinya, **node berkomunikasi** antar satu dengan yang lainnya.
#### - **Parameters** = Merupakan gabungan string dan value,yang artinya mengandung nodes dan mengonfigurasinya saat _startup_ hingga _runtime_.

#### ii. Contoh pengerjaan untuk topik time dengan node publisher **clock** dan subscriber **watch** sudah tercantum pada file lampiran. **Perlu diperhatikan** bahwa saya baru mengetahui bahwa file package. xml, CmakeLists, clock, dan watch disediakan semacam template dari C++, sehingga saya mengambilnya. Akan tetapi, modifikasi template tersebuh **saya kerjakan dengan AI** karena saya masih sangat kurang paham dengan perintah soal. Tetapi, file-file soal tersebut saya coba pelajari.

#### iii. Contoh pengerjaan dengan modifikasi yang diinginkan sudah ada di file lampiran. 

#### iv. Berikut akan dijelaskan _Pinhole Camera Model_ dari sumber buku yg katanya legend itu.
#### - Konsep dari **Pinhole Camera Model** adalah menggunakan cahaya yang diproyeksikan kepada bidang seberangnya. Ciri dari hasil proyeksi ini _inverted_ atau terbalik karena sinar yang merambat lurus akan jatuh sepanjang perambatan cahaya. Intinya, cara paling mendasar untuk memahami bagaimana dunia 3D diproyeksikan ke dalam gambar 2D secara matematis, di mana semua sinar cahaya dipaksa melewati satu titik fokus yang sama. <img width="908" height="730" alt="image" src="https://github.com/user-attachments/assets/57c902f5-d070-4f94-ba3b-438b7c01c151" />

#### - Secara sederhana, **Homogenous Coordinates** adalah kordinat template [x,y,z] yang biasanya digunakan untuk mengekspresikan suatu point 2D hingga 3D. Homogenous coordinates juga dapat diangagap sebagai ekstensi yang memperlihatkan hasil matriks. 
                [X, y] akan menjadi [x,y,1]
                [x,y,z] akan menjadi [x,y,z,1]
Sedangkan, **Rigid Transformation** adalah transformasi yang menginklusi matriks rotasi dan matriks translasi. 
                [R, T] [0, 0] pada 2D
                [R(3x3), T(3x3)] [0,0] pada 3D
#### - **Parameter Intrinsic** adalah parameter yang berasal dari dalam kamera seperti: focal length, perbesaran, dll. Intinya, parameter ini merupakan aspek-aspek internal yang mempengaruhi kualitas tangkapan gambar. Parameter ini dapat berupa matriks yang bekerja untuk DUNIA KAMERA (3D) yang bekerja untuk mengubahnya menjadi NILAI PIXEL (2D). **Parameter Ektrensic** adalah parameter yang berasal dari luar kamera seperti: kualitas cahaya, _angle_ kamera, intinya merupakan aspek-aspek luar yang mempengaruhi kualitas tangkapan gambar. Parameter ini dapat berupa matriks yang bekerja untuk DUNIA LUAR (3D) yang bekerja untuk memproyeksikan dunianya menjadi DUNIA KAMERA (3D).  <img width="966" height="242" alt="image" src="https://github.com/user-attachments/assets/0152259c-e28c-4ea1-9d92-e6bf972f270d" />
#### - **Perpective Projection Matrix** adalah matriks yang biasanya digunakan untuk menghitung berbagai sumbu di bidang. Objek yang berada lebih jauh akan tampak lebih kecil di bidang gambar dibandingkan objek yang dekat. Sehingga, karena matrix ini memilki perhiutngan x dan y yang kejauhannya berbeda beda (z), matrix ini disebut non-linear. **Weak-projection matrix** adalah matriks yang sama, akan tetapi diasumsikan memiliki nilai z yang sama untuk semua sumbu, hal inni dikarenakan  biasanya matriks ini digunakan untuk mengukur objek yang jauh, sehigga semua ketampakan sumbu akan lebih kecil, dan diasumsikan semua. Hal ini menyebabkan matriks ini disebut matriks linear.
#### - **Proses kalibrasi linear** adalah kalibrasi yang memang dilakukan untuk memperbaiki kesalahan pengukuran, akan tetapi kalibrasi linear mengasumsikan bahwa kamera sudah sempurna. Hal ini menyebabkan proses kalkulasi yang sangat cepat, tetapi tidak mengosiderasi distorsi lensa sehingga masih ada error. **Kalibrasi non-linear** adalah kalibrasi yang dilakukan untuk memperbaiki kesalahhan pengukuran. Kalibrasi ini mengasumikan penggunaan kamera di dunia nyata, sehingga kamera akan mengalkulasi berbagai kemungkinan distorsi lensa, dan akhirnya mengurangi erroe. Kalibrasi ini adalah kalibrasi yang paling mendekati real-life.

#### v. Berikut adalah hasil bipor apter dari foto yang telah diubah oleh opencv.
#### **bipor** 
<img width="1762" height="1068" alt="image" src="https://github.com/user-attachments/assets/36fe0787-b6ec-474c-95cf-d45ff557fb44" />
#### **apter**
<img width="1031" height="596" alt="image" src="https://github.com/user-attachments/assets/3f1aeda6-fcd5-4490-9d7b-68662f3a95e6" />

#### vi. Untuk video bipor dan apter dapat dilihat di lampiran.

### 6. Jurusan Ground Control Station (GCS)
#### i. Perhatikan beberapa informasi mengenai MAVLink
#### - Ada beberapa jenis sturktur pesan:
        A. Pesan Header
        B. Panjang Pesan (9)
        C. Pesan Sekuens
        D. System ID = menginformasikan sistem apa yg mengirim pesan
        E. Component ID = menginformasikan komponen apa yg mengirim pesan
        F. Message ID = pesan apa yg terkirim
        G. Message Data (Display)
#### - **System ID** merupakan sistem utama yang mengirim informasi ke display. Kita dapat tahu apakah sistem tersebut dari ID-ya. Dalam mission planner, berbagai fitur informasi pada mission planner lah yang merupakan sistem yang selalu mengirim data ke dispplay. **Component ID** adalah sistem didalam sistem (subsistem) yang datang bersama sistem sebagai bentuk informasi yang masuk ke dalam display.
#### - Cara kerja dari **Heartbeat** adalah dia akan terus menginformasikan status hidup/tidaknya drone pada remote atau display per beberapa detik. Pesan akan dikirim dalam bentu pesan. Karena status akan diinformasikan per beberapa detik, dalam algoritmanya, detik heartbeat akan kembali menjadi 0 ketika penyampaian status kepada remote baru saja dilakukan.
#### - Berikut adalah jenis pesan MAVLink yang biasanya ada
        A. Pesan Status
           - HEARTBEAT = menginformasikan status hidup/mati
           - SYS_STATUS = Memberikan informasi mengenai kesehatan sistem secara keseluruhan, termasuk tegangan baterai, arus, dan beban CPU.
           - STATUSTEXT = Pesan berbasis teks yang biasanya digunakan untuk mengirim peringatan atau informasi penting kepada pilot
        B. Pesan Navigasi dan Informasi Data
           - GLOBAL_POSITION_INT: Mengirimkan koordinat GPS (latitude, longitude, altitude) juga kecepatan drone dalam format integer.
           - VFR_HUD : Berisi data instrumen terbang penting seperti airspeed, groundspeed, heading, throttle, bahkan hingga ketinggian di atas permukaan laut.
           - ATTITUDE : Mengirimkan data orientasi (perputaran) drone, yaitu nilai roll, pitch, dan yaw dalam radian.
        C. Pesan Misi dan Waypoint
           - MISSION_ITEM : Berisi data satu titik waypoint tertentu (koordinat, aksi, dan parameter).
           - MISSION_COUNT : Digunakan saat memulai proses upload untuk menginformasikan berapa banyak waypoint yang dihitung.
           - MISSION_REQUEST : Pesan permintaan dari satu sistem ke sistem lain untuk mengirimkan detail waypoint tertentu dalam sebuah misi.
        D. Pesan Perintah / Command
           - COMMAND_LONG : Digunakan untuk mengirim perintah umum seperti Takeoff, Land, Arming, atau mengubah parameter sistem secara spesifik.
           - COMMAND_ACK : Pesan konfirmasi untuk memberitahu GCS apakah perintah COMMAND_LONG berhasil dieksekusi, ditolak, atau sedang diproses.
#### ii. Berikut adalah diagram arsitektur sederhana untuk mendeskripsikan cara kerja aplikasi web. Dalam gambar tersebut, terdapat 2 warna anak panah yang membedakan sifat kerjanya. **Panah hijau tua** adalah sistem kerja ketika ada input dari pilot. Jika pilot menekan takeoff (frontend), maka algoritma akan langsung bekerja untuk membuat pesawat terbang (backend), informasi algoritma ini akan dikirim ke database dengan UAV gateway yang mampe mentranslasi _bahasa komputer_ jadi _bahasa UAV_ (bahasa agar pesawatnya paham gitu). **Panah krem** adalah sistem kerja dari dalam hingga ke display, misalnya seperti heartbeat. Heartbeat bekerja dengan database mengirim informasi status melalui UAV gateway, yang akan sampai sebagai input algoritma (backend). Output algoritma ini akan membuat status heartbeat terupdate di display (frontend).

#### iii. Perhatikan beberagai informasi mengenai Docker
#### - **Container** adalah sistem dalam drocker yang akan mengisolasi keseluruhan algoritma software. Hal ini membuat software terlindungi dan dapat digunakan di berbagai lingkungan. **Virtual Machine** BUKAN BAGIAN DARI DOCKER. Dia adalah emulasi sistem komputer yang menggunakan perangkat lunak Hypervisor, yang berupa lapisan perangkat lunak yang membagi sumber daya fisik (seperti RAM dan CPU). Virtual Machine berperan seperti komputer fisik yang memiliki sistem operasi (OS), penyimpanan, dan kartu jaringan sendiri di dalam komputer.

#### - **Cara kerja dockerfile** adalah Ddengan cara membaca instruksi teks untuk membangun semacam Docker Image melalui sistem pelapisan/layering. Proses ini dimulai dengan menentukan Base Image menggunakan instruksi FROM, yang berfungsi sebagai fondasi sistem operasi atau lingkungan bahasa pemrograman tertentu. Setiap instruksi selanjutnya, seperti RUN untuk menginstal pustaka seperti OpenCV atau COPY untuk memasukkan kode GCS, akan menciptakan lapisan baru permanen dan dapat disimpan dalam cache untuk mempercepat proses build di masa mendatang.

#### - ada beberapa **manfaat penggunaan dockerfile**
        A. Konsistensi Antar Lingkungan = karena sistem isolasinya akan melindungi software dari berbagai isu
        B. Deployment yang cepat karena dockerfile yang ringan
        





