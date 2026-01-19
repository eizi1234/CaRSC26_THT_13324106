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
