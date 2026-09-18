#include <iostream>
using namespace std;

int main() {
    string pesan;
    int nilaiSebelum = 0;

    cout << "Input pesan: ";
    getline(cin, pesan);

    cout << "Pesan terenkripsi: ";
    for (char karakter : pesan) {
        if (karakter == ' ') {
            cout << karakter;
            continue;
        }

        if (karakter >= 'a' && karakter <= 'z') {
            karakter -= 'a' - 'A';
        }

        if (karakter < 'A' || karakter > 'Z') {
            cout << karakter;
            continue;
        }

        int nilaiSekarang = karakter - 'A' + 1;
        int nilaiAkhir = (nilaiSekarang + nilaiSebelum - 1) % 26 + 1;

        cout << static_cast<char>('A' + nilaiAkhir - 1);
        nilaiSebelum = nilaiSekarang;
    }

    cout << endl;
    return 0;
}