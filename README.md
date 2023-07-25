# C++ Self Courses (Hanya Tentang CPP)
Hanya untuk Simpenan Pribadi & untuk nanti Kuliah:)

## List yang harus dipelajari

* [x] Pengenalan C++ <a href="#pengenalan" style="color: white;">(Click Here)</a> <a href="https://www.w3schools.com/cpp/cpp_intro.asp" style="color: white;">Documentation</a> <br>
* [x] Menentukan Bilangan Prima dengan C++ <a href="#" style="color: white;">(Click Here)</a> <a href="#" style="color: white;">Documentation</a> <br> 

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

Detail singkat mengenai Penggunaan Tipe Data dan Variable.

<pre>
int main() {

short, int, long ==> bilangan bulat // urutan dari kapasitas terkecil ke kapasitas terbesar jadi ibaratnya wadah air (short : gelas kopi, int : bak kamar mandi, long : danau) dari yang terkecil ke terbesar
float, double ==> bilangan pecahan // kasusnya sama seperti short, int, long. volume terkecil ke terbesar
char => 1 karakter
bool => logika benar / salah
string => kata-kata

return 0;
}
</pre>
dan Contoh Penggunaannya adalah sebagai berikut ini : <br><br>
![image](https://user-images.githubusercontent.com/127705735/230269349-1bc71070-0544-47b0-9611-a01496af6ce2.png)

<pre>
#include <iostream>
using namespace std;

int main() {
	
	short angka1 = 80;
	int angka2 = 50000;
	long angka3 = 2000000000; // Jika merasa limit angka yang panjang error silahkan tambahkan L di akhir daripada angka tersebut maka output akan meneghasilkan angka yang sebenarnya tanpa error
	float angka4 = 0.75;
	double angka5 = 0.000078;
	char karakter = 'A'; // Char hanya bisa menampung input 1 kata saja
	bool logika = true; // boolean itu adalah 0 ataupun 1 disebut dengan true or false dua pilihan jalan saja
	string nama = "Joseph R."; 
	
	cout << angka1 << endl;
	cout << angka2 << endl;
	cout << angka3 << endl;
	cout << angka4 << endl;
	cout << angka5 << endl;
	cout << karakter << endl;
	cout << logika << endl;
	cout << nama << endl;
	
	return 0;
	}
</pre>
Sekiranya Seperti itulah Tipe Data dan Variable simple yang ada di C++ untuk awal awal saja, untuk kelanjutannya nanti kita akan bahas ya :)

## <div id="komen">Komentator Pemrograman</div>
Komentar Pemrograman atau Bahasa inggrisnya adalah Comments berguna untuk menjelaskan fungsi dari sebuah line kode dalam bentuk komen, Contohnya : 

<pre>
// Catatan yang hanya bisa dituliskan Untuk keperluan satu baris saja

/*
Catatan yang bisa dituliskan untuk Multiple Baris
*/
</pre>

Untuk sebuah komentar wajib menggunakan salah satu dari 2 tanda diatas, karena Jika kita lupa menggunakan symbol tersebut untuk sebuah komentar maka akan menimbulkan error pada kode saat di execute / di run.

## <div id="strukturkontrol">Struktur Kontrol Percabangan</div>
Jadi ketika kita Menemukan suatu Kasus seperti : Seseorang Bisa dinyatakan lulus saja jika Nilai mereka diatas 80 / minimal 75 , Jika tidak maka ia tidak lulus.
Jika dikaitkan dengan kasus matematika maka bisa diimplementasikan seperti ini : Jika nilai tersebut dibawah 0.35 atau kurang maka ia mendapatkan predikat D, sebaliknya jika tidak maka Menyesuaikan tergantung daripada nilai tersebut. 

#### Contohnya untuk Percabangan if #1 : 
<pre>
int main() {
	
	int nilai = 80; // nilai dari suatu tipe data
	
	if (nilai >= 75) { // Jika nilai lebih besar atau sama dengan 75 atau sebutlah jika nilai tersebut adalah True maka kode dibawah akan dieksekusi
		cout << "lulus" << endl; // maka nilai tersebut dinyatakan lulus karena nilai tipe datanya adalah 80 otomatis memenuhi kriteria
	}
	
	return 0;
}
</pre>
Jika Nilai diatas adalah 60 maka kondisi tidak akan dieksekusi atau menghasilkan error, Karena tidak memenuhi kriteria dari sebuah variable didalam if. atau sebutlah false, karena 60 lebih kecil daripada 75 jadi line if tidak akan dijalankan dan langsung return 0; 

#### Contohnya untuk Percabangan if else #2 : 
<pre>
int main() {
	
	int nilai = 60; // nilai dari suatu tipe data
	
	if (nilai >= 75) { // Jika nilai lebih besar atau sama dengan 75 atau sebutlah jika nilai tersebut adalah True maka kode dibawah akan dieksekusi
		cout << "lulus" << endl; // maka nilai tersebut dinyatakan lulus karena nilai tipe datanya adalah 80 otomatis memenuhi kriteria
	} else {
		cout << "kamu remed" << endl; // Tapi Jika nilai tersebut tidak memenuhi kriteria maka output baris ini yang akan keluar
	}
	
	return 0;
}
</pre>

else adalah pilihan kedua jika nilai tidak memenuhi kriteria awal (diatas 75), maka output yang akan dieksekusi adalah yang "Kamu remed" karena nilai tidak memenuhi kriteria minimum dari suatu variable / integer.

#### Contohnya Percabangan if else if (biasa disebut if didalam if) #3 : 

<pre>
int main(){
    int nilai 80;
    
    if (nilai >= 0 && nilai <= 25){
		cout << "Grade kamu D" << endl; // Jika Nilai diatas sama dengan 0 atau kurang dari sama dengan 25 maka akan mengeksekusi kode baris ini
	} else if (nilai >= 25 && nilai <= 50){
		cout << "Grade kamu C" << endl; // Jika Nilai diatas sama dengan 25 atau kurang dari sama dengan 50 maka akan mengeksekusi kode baris ini
	} else if (nilai >= 50 && nilai <= 75){
		cout << "Grade kamu B" << endl; // Jika Nilai diatas sama dengan 50 atau kurang dari sama dengan 75 maka akan mengeksekusi kode baris ini
	} else if (nilai >= 75 && nilai <= 100){
		cout << "Grade kamu A" << endl; // Jika Nilai diatas sama dengan 75 atau kurang dari sama dengan 100 maka akan mengeksekusi kode baris ini
	} else {
		cout << "Tidak mengerjakan ujian" << endl; // Jika nilai tidak sesuai dengan kriteria yang disebutkan maka hasilnya false dan kode baris ini akan dieksekusi.
	}
	
	return 0;
}
</pre>
if else if bisa sepanjang apapun sesuai yang kita mau dan tergantung kebutuhan, dan kita bisa menaruh else terakhir untuk menyatakan nilai tersebut tidak sesuai dengan kriteria manapun (tergantung kondisi kode), untuk mempelajari symbol operasinya : <a href="https://www.petanikode.com/cpp-operator/">Disini</a>

#### Contoh Percabangan Switch case #4 :
<pre>
int main() {
	
	int nilai = 5; // nilai dari suatu tipe data
	
	switch(nilai){
		case 1: // 5 tidak sama dengan 1 maka baris ini akan dilewati
			cout << "satu" << endl;
			break; // Pembatasan atau limit kata agar setelah kode dieksekusi maka berhentilah operasi dari compiler kode
		case 2: // 5 tidak sama dengan 2 juga maka baris ini akan dilewati
			cout << "dua" << endl;
			break;
		case 3: // 5 tidak sama dengan 3 juga maka baris ini akan dilewati
			cout << "tiga" << endl;
			break;
		default: // Jika nilai tersebut tidak sama dengan kriteria diatas maka baris kode ini akan dieksekusi
			cout << "undefinied" << endl;
	}
	
	return 0;
}
</pre>

Switch case agak mirip dengan if else hanya saja percabangan satu ini lebih spesifik kriterianya, nilai tersebut akan di switch hingga menemukan case yang tepat? maksudnya jika kita ingin mendefinisikan 5 adalah lima maka tunggu sampai nilai tersebut sama dengan kriteria dari variable si case ini, maka jika nilai dan variable yang dicek sudah sama/sesuai kriteria lalu tampil-lah output tersebut. 

## <div id="perulangan">Struktur Kontrol Perulangan</div>
Looping atau perulangan terkenal dengan menulis berulang kali, kali ini kita akan membahasnya dengan simple langsung saja yok 3 Struktur dalam Perulangan.
Jenis jenis struktur perulangannya :
<pre>for, while, do..while </pre>
Apa maksud dari jenis jenis diatas? kita akan bahas sama-sama satu persatu dibawah ini ya :D 

#### Perulangan for #1 :
<pre>
for (int x = 1; x <= 10; x = x+1) {
	cout << "1" << " ";
	}
</pre>
kode diatas akan menghasilkan output :
<pre>1 1 1 1 1 1 1 1 1 1</pre>
Jika ingin menambahkan Jumlahnya sampai 100 ataupun 1000 bisa mengubah nilainya pada <= "10" menjadi "100" atau "1000".

#### Perulangan while #2 : 
<pre>
int x = 1;
	while(x<=10) { // x diulang sampai 10 kali
		cout << x << " "; // output dimulai dari x yaitu 1.
		x = x + 1; // dan output selanjutnya adalah setiap x itu ditambah 1, seperti yang ditampilkan dibawah ini.
	}
</pre>
kode diatas akan menghasilkan output :
<pre>
1 2 3 4 5 6 7 8 9 10
</pre>
Output akan Tampil saat kondisi while terpenuhi atau True.

#### Perulangan do.while #3 :
<pre>
	int x = 1;
	do { 
		cout << x << " "; // output dimulai dari x yaitu 1.
		x = x + 1; // dan output selanjutnya adalah setiap x itu ditambah 1, seperti yang ditampilkan dibawah ini.
		
	} while(x <=10); // kuncinya ada disini, do akan dilakukan jika kondisi while adalah true 
</pre>
Do While akan hanya dijalankan jika kondisi while adalah true seperti yang sudah dijelaskan di atas juga.

## <div id="array">Array</div>
Dalam array, setiap nilai yang disimpan diberi nomor indeks yang dimulai dari nol (0). Nomor indeks ini nantinya akan digunakan untuk mengakses nilai yang disimpan di dalam array. Dengan menggunakan array, Anda dapat dengan mudah memanipulasi dan mengakses nilai-nilai tersebut tanpa harus membuat banyak variabel terpisah.
<pre>
// array (Multiple Variable)
	int nilaisiswa[5] = {80,90,100,65,55}; // 5 Coloumn for "nilai" Variable
	
// cout << nilaisiswa[3] << endl; // every index is started from 0
	for (int x = 0; x < 5; x++){ // untuk setiap x dimulai dari 0, x kurang dari 5, setiap x ditambah 1
		cout << nilaisiswa[x] << " "; // x adalah untuk menampilkan keseluruhan isi dari variable nilaisiswa
		// jika ingin menampilkan output spesifik seperti "nilaisiswa[2]" maka nilai 100 atau nilai barisan ketiga akan tampil pada output.
	}
</pre>
Sekian Pembahasan Mengenai Array sekaligus menutup Selfcourse pengenalan C++ Kita kali ini, Peace!
