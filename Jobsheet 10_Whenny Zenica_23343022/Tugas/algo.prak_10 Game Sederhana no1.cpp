/* 	nama tugas     : Jobsheet10
	nama programer : Whenny zenica_23343022
	Kasus Program  : Game Tebak-tebakan
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Inisialisasi seed untuk generate nomor acak

    char playAgain;
    do {
        int computerNumber = rand() % 20 + 1; // Generate nomor acak antara 1 dan 20
        int userGuess;
        int attempts = 0;

        cout << "============Selamat datang di permainan tebak angka!============\n";
        cout << "##Saya sudah memilih sebuah angka antara 1 dan 20.## \n Coba tebak!\n";

        do {
            cout << "Masukkan tebakan Anda: ";
            cin >> userGuess;
            attempts++;
            
            if (userGuess < computerNumber) {
                cout << "Nomor saya lebih besar!\n";
            } else if (userGuess > computerNumber) {
                cout << "Nomor saya lebih kecil!\n";
            } else {
            	cout << "Gacorr!\n";
                cout << "Selamat Ma Hubby:v, Anda benar!\n";
                cout << "_________________________________\n";
                cout << "Jumlah percobaan yang diperlukan: " << attempts << "\n";
            }

        } while (userGuess != computerNumber);

        cout << "Ingin bermain lagi? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Terima kasih telah bermain. Sampai jumpa!\n";

    return 0;
}
