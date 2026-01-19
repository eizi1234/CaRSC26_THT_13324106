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
### - #include <file_name> dan #include "file_name" = Menginklusi berbagai file tertentu kedalam kodingan. <> biasanya digunakan untuk memanggil library dan "" digunakan untuk memanggil file-file tertentu.
### - **#ifdef** adalah perintah kondisional yang berfungsi pada suatu _define_. Jika define suatu variabel sudah ter-defined, maka ifdef akan mengaktifkan perintah selanjutnya. **ifndef** aktif jika suatu variabel tidak ter-defined, dia akan mengaktifkan perintah selanjutnya. **endif** adalah command untuk menyelesaikan perintah kondisional. Yang terakhir, **#pragma** adalah perintah yang hanya dapat dilihat oleh preprocessor yang isinya mengenai informasi tertentu.
### - **scope resolution operator (::)** adalah command yang dapat dianggap _penanda_. Contoh; ada 
        **std::cout<<hai guys** 
Dia menandakan suatu bahwa suatu name berupa std, merupakan bagian dari suatu namespace std. << lebih semacam perintah untuk menghasilkan suatu output. Output yang ada pada contoh tersebut adalah << memerintahkan untuk menghasilkan "hai guys". **Namespace**, seperti namanya, mendefinisikan kumpulan library yang berisi banyak name.
### - **Define** merupakan perintah untuk mendefinsikan nilai suatu variabel. Misalnya, 
                #define pi = 3.14
###   Lalu, **using** merupakan perintah untuk menyatakan jenis namespace, sehingga tidak perlu lagi mendefinisikan panjang-panjang seperti pada scope resolution operator
        using namespace std
        cout<<hai guys
### jika kita hanya ingin menggunakan _std::cout_ saja, maka kita harus menulis std berkali-kali. Using memudahkan dengan menyatakan bahwa name yang dipanggil akan terus berasal dari namespace yang sama.

### - **Define**
