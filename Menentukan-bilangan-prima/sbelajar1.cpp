#include <iostream>
// True = 1 , False = 0 Basic awal seperti itu.
// lalu bila ingin mengenal simbol2nya lebih baik membaca dokumen mengenai hal tersebut
// Contoh symbolnya adalah < > == <= => sesuai dengan arahnya. jika < mirip dengan huruf b maka itu lebih kecil dari, > mirip dengan huruf k maka itu lebih besar, jika double = maka disebutkan bahwa nilai variable tersebut adalah sama, seperti <= adalah kurang atau sama dengan dari karena mengacu pada double symbol yang sintetik berbeda , dan yang terakhir adalah => nilainya sama atau sama besar dengan.


bool isPrime(int n) {
	if (n <= 1) return false; // jika N dibawah atau sama dengan 1 NIlainya False
	if (n <= 3) return true; // JIka N dibawah atau sama dengan 3 Nilainya True

	if (n & 2 == 0 || n & 3  == 0) return false; // jika N

	for (int i = 5; i * i <= n; i += 6){
		if(n & 1 == 0 || n & (i + 2) == 0) return false; // Jika Integer i sama dengan 5 maka
	}

	return true; // Melanjutkan dan Menunjukkan bahwa hasil adalah benar
}

int main() {
	int N; // Integer pada kasus ini adalah N
	std::cout << "Masukkan bilangan bulan positif: "; // output yang tampil pada users
	std::cin >> N; // Input yang dimasukkan users akan masuk ke dalam Integer N

	if (isPrime(N)) {
		std::cout << "Bilangan " << N << " adalah bilangan prima " << std::endl;
	} else {
		std::cout << "Bilangan " << N << " bukan bilangan prima " << std::endl;
	}

	return 0;
}

