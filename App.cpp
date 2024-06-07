#include <iostream>
#include <string>

using namespace std;

// Deklarasi Fungsi
void displayHomeScreen(const string &username);
void displayMenu();
void pemilihanMenu(char selection);

int main() {
    string username;
    
    // Menu Login
    cout << "===== Login =====" << endl;
    cout << "Masukkan username: ";
    getline(cin, username);

    // Menampilkan homescreen
    displayHomeScreen(username);

    return 0;
}

// Function menampilkan homescreen dengan username
void displayHomeScreen(const string &username) {
    cout << "Selamat Datang di SISNATANMAS, " << username << "!" << endl;
    displayMenu();
}

// Function Menampilkan Pilihan Menu
void displayMenu() {
    cout << "\n========== Pilihan Menu: ==========" << endl;
    cout << "1. Pendaftaran" << endl;
    cout << "2. Cari Ruangan" << endl;
    cout << "3. Keluar" << endl;

    char selection;
    cout << "Pilih menu (1-3) : "; cin >> selection;
    pemilihanMenu(selection);
}

// Function Pemilihan Menu
void pemilihanMenu(char selection) {
    switch (selection) {
        case '1':
            cout << "Menu Pendaftaran dipilih." << endl;
            // tampilkan pendaftaran
            break;
        case '2':
            cout << "Menu Cari Ruangan dipilih." << endl;
            //tampilkan cari ruangan
            break;
        case '3':
            cout << "Terima kasih telah menggunakan layanan kami. Sampai Jumpa!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silahkan Coba lagi." << endl;
            displayMenu();
    }
}
