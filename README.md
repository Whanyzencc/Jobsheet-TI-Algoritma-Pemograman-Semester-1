# Jobsheet Algo.Pemograman

 ## **Pemrograman Dasar C**

  ______________________
* **Name    : Whenny Zenica**      
* **NIM     : 23343022**           
* **Jurusan : Teknik Elektronika** 
* **Prodi   : Informatika**

  
______________________
**TUJUAN PEMBELAJARAN**
1. Mampu memahami struktur dasar penulisan bahasa pemrograman C.
2. Mampu mengimplementasikan Basic Syntax C, Proses Input & Ouput dalam
pemrograman menggunakan IDE.

**POKOK MATERI**
1. Struktur Dasar C
2. Proses Input & Output
   
**URAIAN MATERI**

**A. Sintaks**
* Dalam setiap bahasa pemrograman memiliki sintaks tersendiri yang dapat
  diartikan sebagai aturan penulisan kode pada bahasa pemrograman tersebut.
  Ini adalah struktur dasar yang wajib dipahami. Struktur program C dibagi
menjadi dua bagian utama:
1) Bagian Include;
2) Blok Fungsi Main
   
**1) Header Files**

Di baris paling awal, terdapat kode #include. Perintah #include digunakan
untuk memasukkan sebuah file khusus yang memungkinkan untuk
mengakses berbagai fitur tambahan dalam bahasa C. #include berfungsi
untuk mengimpor fungsi-fungsi yang sudah didefinisikan pada header file. Header file adalah file yang berisi definisi fungsi yang sudah dibuat.
Tujuannya agar bisa digunakan pada program C yang lainnya. File ini
berekstensi .h, contoh: stdio.h. Pada contoh di atas, kita mengimpor file
stdio.h. File ini berisi deklarasi fungsi-fungsi dasar yang kita butuhkan
untuk membuat program C, seperti printf().

**2) Main Function**

Satu-satunya perintah yang harus ada di setiap kode program bahasa C
adalah main(). Struktur main() sendiri pada dasarnya merupakan sebuah
fungsi (function). Isi dari function ini diawali dan diakhiri dengan
tanda kurung kurawal { dan } . Di dalam tanda kurung inilah
“statement” dari kode program penyusun fungsi main() ditulis.
Fungsi main() adalah fungsi utama dalam program. Fungsi ini akan
dieksekusi pertamakali saat program dijalankan. Karena itu, kita
harus menuliskan logika program di dalam fungsi ini. Maksud dari int di depan main adalah tipe data yang akan
dikembalikan. Maka di dalam fungsi main(), wajib kita sertakan
return 0. Artinya, fungsi main akan mengembalikan nilai 0 setelah
selesai dieksekusi.
Cara lain kita bisa menggunakan void.
void artinya tidak ada (kosong). Jika kita menggunakan void, maka
kita tidak perlu menuliskan kata kunci return di akhir fungsi. Karena
fungsi void tidak akan mengembalikan nilai apapun.

**3) Statement**

Statemen adalah perintah-perintah atau fungsi untuk melakukan sesuatu.
Artinya: kita menyuruh komputer untuk mencetak teks Hello World! ke
console. Setiap statement di dalam program C warjib diakhiri dengan titik
koma (;) atau semicolon.

**4) Semicolons**

Pada program, semikolon menandakan berakhirnya sebuah perintah atau
statement. Artinya dalam program C semua statement harus diakhiri
dengan semikolon kalau tidak program akan error.

**5) Identifier**
Indentifier merupakan sebuah nama yang digunakan untuk
mengidentifikasi variabel, fungsi, atau semua item yang didefinisikan oleh
programmer. Adapun cara menuliskan identifier yaitu:

(1) Diawali dengan huruf A s/d Z, a s/d z atau underscore (_).

(2) Indentifier dapat dibuat menggunakan digit angka 0 s/d 9 tapi tidak
diperbolehkan untuk digunakan pada awal karakter pada identifier.

(3) Tidak diperbolehkan menggunakan karakter lain selain yang telah
    disebutkan, artinya karakter seperti !, $, %, @, - dan karakter lainnya
    tidak diperbolehkan dimanapun di dalam nama identifier.

(4) Bahasa C merupakan bahasa case sensitive yang artinya alamat dan
Alamat merupakan identifier yang berbeda.
Variabel nama dengan Nama akan diganggap variabel yang
berbeda, karerna ada yang pakai huruf besar (kapital) dan hutuf
kecil.

(5) Nama identifier harus unik. Untuk menghindari kesalahan dalam
penulisan program atau agar lebih mudah membaca kode program
(tidak membingungkan) sebaiknya hindari memberi nama identifier
yang mirip.

**6) Comments**
   
Comment atau komentar akan diabaikan oleh kompiler. Komentar
biasanya digunakan untuk mendeskripsikan fungsi dari baris program
atau mendokumentasi setiap bagian dari sebuah program. Komentar dapat
terdiri dari satu baris komentar dengan menggunakan tanda // pada awal
komentar dan untuk membuat komentar yang lebih dari satu baris dapat
menggunakan tanda /* dan diakhiri dengan tanda */.

**8) Whitespaces**
   
Istilah whitespace dalam bahasa C digunakan untuk mendeskripsikan
blank, tab, spasi, baris baru dan dapat juga berupa komentar. Whitespace
digunakan untuk memisahkan bagian dari sebuah statemen yang
memungkinkan kompiler mengidentifikasi elemen yang satu dan lainnya
dalam sebuah statement.

**B. Proses Input & Output**
1. Input adalah sesuatu data yang kita masukan ke dalam program. Input
biasanya diambil dari perangakat inputan seperti keyboard, mouse,
kamera, microphone, dll.


