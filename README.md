# C++ Self Courses untuk Kuliah Semester 1
Hanya untuk Simpenan Pribadi :)

## List yang harus dipelajari
<pre> Source : Adi Setiawan <a href="https://www.youtube.com/watch?v=6-rZAqE2o6c">Youtube</a></pre>
* [x] Pengenalan C++ <a href="#pengenalan" style="color: white;">(Click Here)</a> <a href="https://www.w3schools.com/cpp/cpp_intro.asp" style="color: white;">Documentation</a> <br>
* [x] Kebutuhan Software untuk Pemrograman <a href="#kebutuhansoftware" style="color: white;">(Click Here)</a> <a href="https://www.codecademy.com/resources/blog/what-is-c-plus-plus-used-for/" style="color: white;">Documentation</a> <br>
* [x] Program C++ Pertama <a href="#programpertama" style="color: white;">(Click Here)</a> <a href="https://www.youtube.com/watch?v=6-rZAqE2o6c&t=687s" style="color: white;">Documentation</a> <br>
* [x] Input dan Output <a href="#iou" style="color: white;">(Click Here)</a> <a href="https://cplusplus.com/doc/tutorial/basic_io/" style="color: white;">Documentation</a> <br>
* [x] Tipe data dan Variable <a href="#datavar" style="color: white;">(Click Here)</a> <a href="https://blog.rumahcoding.co.id/variabel-dan-tipe-data-pada-c/" style="color: white;">Documentation</a> <br>
* [ ] Komentator Pemrograman
* [ ] Struktur Kontrol Percabangan
* [ ] Struktur Kontrol Perulangan
* [ ] Array

## <div id="pengenalan">Pengenalan C++</div>

C++ adalah sebuah bahasa pemrograman yang sangat populer dan kuat. Dalam dunia pemrograman, C++ sering digunakan untuk membuat perangkat lunak yang kompleks seperti sistem operasi, aplikasi desktop, game, dan bahkan perangkat lunak untuk pengembangan website.

Dalam C++, kita dapat membuat program dengan kode yang lebih cepat dan efisien daripada bahasa pemrograman lainnya. C++ juga memiliki kemampuan untuk melakukan manajemen memori secara langsung, memberikan kontrol yang lebih besar kepada programmer dalam penggunaan memori.

## <div id="kebutuhansoftware">Kebutuhan Software untuk Pemrogramman</div>

Kita bisa Menggunakan IDE Code Blocks / Dev C++ Editor untuk hal yang disebutkan Karena : <br><br>
IDE (Integrated Development Environment): IDE adalah sebuah software yang digunakan untuk menulis, mengedit, dan menguji kode C++. Beberapa contoh IDE yang populer untuk C++ antara lain Microsoft Visual Studio, Code::Blocks, dan Eclipse. <br>
<pre>Kita bisa Download IDE Code Blocksnya disini : <a href="https://www.codeblocks.org/downloads/">Download IDE</a> 
Kita bisa Download IDE Dev C++ disini : <a href="https://sourceforge.net/projects/orwelldevcpp/">Download IDE</a></pre>

## <div id="programpertama">Program C++ Pertama</div>

Setelah Aplikasi IDE untuk C++ Ter-Download langsung saja diInstal dan Dibuka, Selanjutnya langsung saja kita Tulis Kode pertama kita.

![image](https://user-images.githubusercontent.com/127705735/230028978-195d4a63-26dc-4118-93ee-4599e912bd32.png)

<pre>#include < iostream > // untuk Mengikutsertakan Kode serta identifikasi IO (Input Output)
using namespace std; // implementasi Penyingkatan Kode

int main(){ // Start block Utama Program
	
	cout << "Tulisan yang ditampilkan pada compiler" << endl; // c output
	
	return 0;
}
</pre>

Setelah itu jika ingin melihat hasil run kita bisa dengan Menekan Execute - Run atau Compile & run <br>

## <div id="iou">Input dan Output</div>

Selanjutnya kita akan Masuk ke dalam Sub-Materi Input dan Output yang dimana kalau digambarkan sebagai kasus sehari hari : <br>
<pre>User ingin menaruh sebuah angka, dimana angka tersebut ingin dijadikan suatu angka lain melewati sebuah opsi</pre>
Yang berarti kita harus bisa memecahkan sebuah solusi simple tersebut dengan menggunakan input output variable.
Contoh Kode yang kita bisa menampilkan hasil output dari sebuah input : <br>

![image](https://user-images.githubusercontent.com/127705735/230265348-92b18e00-c75a-4028-90b0-ee2ba2e49f72.png)

<pre>
int main() { 
	
	int angka; // tipe data yang disimpan adalah integer
	
	cout << "masukkan angka : "; // output yang ditampilkan diterminal, bisa diisi oleh user karena terdapat tanda : sebelum kutip
	cin >> angka; // input yang dimasukkan user akan disimpan sebagai var angka, sesuai identifikasi awal diatas (sebuah nilai)
	cout << "anda memasukkan angka : " << angka << endl; // output angka yang ditampilkan akan sesuai dengan integer angka yang diinput sebelumnya
}
</pre>

Note : Jangan lupa memperhatikan tanda / symbol pada kode karena pada bahasa pemrogramman tertentu tanda tersebut sangatlah sensitif. karena jika error kita akan sulit menemukan lokasinya karena terlalu spesifik kecilnya, apalagi karena kesalahan seperti kepencet (.) atau typos pada kode. 

## <div id="datavar">Tipe Data dan Variable</div>
