#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void displayCreatedBy() {
    cout << "Dibuat oleh Kelompok 5" << endl;
    cout << "Devarlo Rahadyan Razan" << endl;
}

// Function untuk memilih truth secara acak
string getRandomTruth() {
    string truths[] = {
        "Apa hal paling konyol yang pernah kamu lakukan?",
        "Ceritakan pengalaman memalukan yang pernah kamu alami.",
        "Siapa orang yang paling kamu benci?",
        "Apa hal teraneh yang pernah kamu makan?",
        "Jika kamu bisa menjadi selebriti selama sehari, siapa yang ingin kamu jadi?",
        "Apa hal yang paling kamu sesali dalam hidup kamu?"
    };

    int index = rand() % (sizeof(truths) / sizeof(truths[0]));
    return truths[index];
}

// Function untuk memilih dare secara acak
string getRandomDare() {
    string dares[] = {
        "Lakukan tarian lucu di depan semua orang.",
        "Hubungi seseorang yang sudah lama tidak kamu hubungi dan katakan bahwa kamu merindukannya.",
        "Makan makanan yang tidak kamu sukai selama 1 menit.",
        "Berikan ucapan selamat ulang tahun kepada orang di sebelah kananmu.",
        "Ambil selfie dengan ekspresi paling konyol dan bagikan di media sosial.",
        "Buatlah lagu spontan tentang seseorang di ruangan ini."
    };

    int index = rand() % (sizeof(dares) / sizeof(dares[0]));
    return dares[index];
}

int main() {
    displayCreatedBy(); // Menampilkan tulisan "Dibuat oleh Kelompok 5"

    srand(time(0));

    cout << "=== Truth or Dare ===" << endl;
    cout << "1. Truth" << endl;
    cout << "2. Dare" << endl;
    cout << "=====================" << endl;

    int choice;
    cout << "Pilih truth atau dare (1-2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Truth: " << getRandomTruth() << endl;
    } else if (choice == 2) {
        cout << "Dare: " << getRandomDare() << endl;
    } else {
        cout << "Pilihan tidak valid. Silakan pilih truth atau dare." << endl;
    }

    // Kelanjutan setelah pemilihan truth atau dare
    cout << "Apakah kamu ingin bermain lagi? (y/n): ";
    char playAgain;
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        main(); // Mengulangi permainan jika ingin bermain lagi
    } else {
        cout << "Terima kasih telah bermain Truth or Dare!" << endl;
    }

    return 0;
}
