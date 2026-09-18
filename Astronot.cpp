#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Masukkan jumlah astronot (N): ";
    cin >> n;
    cout << "Masukkan angka untuk eliminasi (K): ";
    cin >> k;

    if (n <= 0) {
        cout << "Jumlah astronot harus lebih dari 0.\n";
        return 1;
    }

    if (k < 2) {
        k = 2;
    }

    int* astronot = new int[n];
    for (int i = 0; i < n; i++) {
        astronot[i] = i + 1;
    }

    int jumlah = n;
    int posisi = 0;
    cout << "Urutan eliminasi: ";
    while (jumlah > 1) {
        posisi = (posisi + k - 1) % jumlah;
        int tereliminasi = astronot[posisi];
        cout << tereliminasi << " ";

        for (int i = posisi; i < jumlah - 1; i++) {
            astronot[i] = astronot[i + 1];
        }
        jumlah--;

        if (tereliminasi % 2 == 0) {
            k += 2;
        } else {
            k--;
            if (k < 2) {
                k = 2;
            }
        }

        if (posisi == jumlah) {
            posisi = 0;
        }
    }

    cout << "\nAstronot terakhir: " << astronot[0] << '\n';
    delete[] astronot;
    return 0;
}