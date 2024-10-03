#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;

float suhu;
char status;

void nilaisuhu() {
    cout << "Masukkan suhu yang pengen dikonversi (angka aja ya): ";
    cin >> suhu;
    cout << "=================================\n";
}

void c(float temp) {
    cout << fixed << setprecision(2); // Menggantikan (%.2f)
    cout << "\n>>>>>>>> Konversi dari Celsius <<<<<<<<\n";
    cout << "--> Di Fahrenheit jadi	 : " << (temp * 9 / 5) + 32 << endl;
    cout << "--> Di Kelvin jadi    	 : " << temp + 273 << endl;
    cout << "--> Di Reamur jadi    	 : " << temp * 4 / 5 << endl;
    cout << "---------------------------------------\n";
}

void f(float temp) {
    cout << fixed << setprecision(2);
    cout << "\n>>>>>>>> Konversi dari Celsius <<<<<<<<\n";
    cout << "--> Di Celsius jadi	 : " << (temp - 32) * 5 / 9 << endl;
    cout << "--> Di Kelvin jadi		 : " << (temp - 32) * 5 / 9 + 273 << endl;
    cout << "--> Di Reamur jadi   	 : " << (temp - 32) * 4 / 9 << endl;
    cout << "---------------------------------------\n";
}

void k(float temp) {
    cout << fixed << setprecision(2);
    cout << "\n>>>>>>>> Konversi dari Celsius <<<<<<<<\n";
    cout << "--> Di Celsius jadi  	  : " << temp - 273 << endl;
    cout << "--> Di Fahrenheit jadi	  : " << (temp - 273) * 9 / 5 + 32 << endl;
    cout << "--> Di Reamur jadi   	  : " << (temp - 273) * 4 / 5 << endl;
    cout << "---------------------------------------\n";
}

void r(float temp) {
    cout << fixed << setprecision(2);
    cout << "\n>>>>>>>> Konversi dari Celsius <<<<<<<<\n";
    cout << "--> Di Celsius jadi  	  : " << temp * 5 / 4 << endl;
    cout << "--> Di Fahrenheit jadi	  : " << (temp * 9 / 4) + 32 << endl;
    cout << "--> Di Kelvin jadi   	  : " << (temp * 5 / 4) + 273 << endl;
    cout << "---------------------------------------\n";
}

int main() {
	awal:
    int kodesuhu;
	
    cout << "\n";
    cout << "+===============================+\n";
    cout << "|   Pilih jenis konversi suhu   |\n";
    cout << "+===============================+\n";
    cout << "|1. Dari Celsius                |\n";
    cout << "|2. Dari Fahrenheit             |\n";
    cout << "|3. Dari Kelvin                 |\n";
    cout << "|4. Dari Reamur                 |\n";
    cout << "+===============================+\n";
    cout << "Silahkan Pilih : ";
    cin >> kodesuhu;

    switch (kodesuhu) {
    case 1:
        nilaisuhu();
        c(suhu);
        break;
    case 2:
        nilaisuhu();
        f(suhu);
        break;
    case 3:
        nilaisuhu();
        k(suhu);
        break;
    case 4:
        nilaisuhu();
        r(suhu);
        break;
    default:
        system("cls");
        goto awal;
    }
    
//	Perulangan
    cout << "\n";
    cout << "Ingin menghitung lagi? (Y/n) ";
    cin >> status;
	if ( status == 'Y' || status == 'y' )
    {
        system("cls");
        goto awal;
    } else {
    	system("cls");
        cout << "\n";
        cout << "Terimakasih dan jangan Lupa Belajar";
        getch();
        exit(0);
    }

}

