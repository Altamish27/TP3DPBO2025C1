Saya Hasbi Haqqul Fikri dengan NIM 2309245 mengerjakan soal TP 3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

![Diagram](https://github.com/user-attachments/assets/b42fa21b-cda4-4425-b2c3-006c9cbd09e8)

Inheritance
Konsep inheritance dalam kode ini diterapkan dengan membuat kelas Komponen sebagai superclass utama, yang kemudian diwarisi oleh Cpu, Gpu, Ram, Harddrive, dan PowerSupply. Dengan cara ini, setiap komponen komputer memiliki atribut dasar seperti merk dan nama, tanpa perlu menuliskannya ulang di setiap kelas turunannya. Sebagai contoh, kelas Cpu mewarisi dari Komponen dan menambahkan atribut spesifik seperti jumlahCore dan kecepatanGHz. Dengan inheritance, struktur kode menjadi lebih modular dan terorganisir, karena semua komponen yang berbagi sifat dasar dapat menggunakannya tanpa duplikasi kode.

Composition
Komposisi diterapkan dalam kelas Komputer, di mana objek Cpu, Harddrive, PowerSupply, serta array vector<Ram> dan vector<Gpu> digunakan sebagai atributnya. Ini mencerminkan hubungan "has-a", di mana sebuah komputer tidak bisa berdiri sendiri tanpa memiliki komponen-komponen tersebut. Sebagai contoh, atribut vector<Gpu> memungkinkan komputer untuk memiliki lebih dari satu GPU, yang sesuai dengan kebutuhan sistem multi-GPU. Dengan pendekatan komposisi ini, kode menjadi lebih fleksibel, karena kita bisa dengan mudah menambah atau mengganti komponen dalam objek Komputer tanpa perlu mengubah struktur kelas secara mendasar.

Array of Objects
Penggunaan array of objects diterapkan dalam vector<Ram> dan vector<Gpu> pada kelas Komputer. Hal ini memungkinkan komputer untuk memiliki beberapa modul RAM dan GPU dalam satu sistem. Dengan menggunakan vector, program bisa dengan dinamis menambah atau menghapus objek, yang lebih efisien dibandingkan penggunaan array statis. Implementasi ini mencerminkan cara kerja komputer nyata, di mana pengguna dapat memasang lebih dari satu RAM atau GPU sesuai kebutuhan.

Hierarchical Inheritance
Hierarchical inheritance diterapkan dengan membuat beberapa kelas (Cpu, Gpu, Ram, Harddrive, PowerSupply) yang semuanya merupakan turunan dari superclass Komponen. Ini memungkinkan setiap komponen untuk memiliki sifat dasar yang sama, tetapi dengan fitur tambahan masing-masing. Sebagai contoh, Gpu menambahkan atribut vramGB, sedangkan Ram memiliki kapasitasGB dan ddr. Dengan pendekatan ini, kode lebih terstruktur dan mudah dikembangkan, karena kita cukup menambahkan fitur baru di subclass tanpa perlu mengulang kode dasar.

Multiple Inheritance
Konsep Multiple Inheritance diterapkan dengan menambahkan kelas CoolingSystem, yang memiliki metode coolDown() dan adjustFanSpeed(). Kelas ini kemudian diwarisi oleh SmartPowerSupply, sehingga power supply kini memiliki sistem pendinginan otomatis.Dengan cara ini, fitur pendinginan dapat digunakan oleh berbagai komponen tanpa harus menuliskannya ulang di setiap kelas. Ini memastikan desain kode tetap modular dan dapat diperluas tanpa mengubah hierarki inheritance yang sudah ada.


Hybrid Inheritance
Konsep Hybrid Inheritance diterapkan dengan membuat kelas SmartPowerSupply, yang merupakan turunan dari PowerSupply dan CoolingSystem.PowerSupply tetap mewarisi sifat utama dari Komponen.
SmartPowerSupply kemudian mewarisi dari PowerSupply dan CoolingSystem, sehingga memiliki fitur power supply biasa sekaligus sistem pendinginan otomatis.
Dengan pendekatan ini, kita menggabungkan Hierarchical Inheritance (karena PowerSupply mewarisi dari Komponen) dan Multiple Inheritance (karena SmartPowerSupply mewarisi dari dua kelas).
Keuntungannya adalah kode tetap modular, bisa berkembang dengan fitur tambahan, tetapi tidak perlu memodifikasi kelas yang sudah ada.

