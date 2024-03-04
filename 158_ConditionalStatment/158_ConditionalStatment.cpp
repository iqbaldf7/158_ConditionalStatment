#include <iostream>
#include <string>
using namespace std;

int main()
{
    float Matematika, Fisika, rerata;
    string status;

    cout << "Masukkan Nilai Matematika : ";
    if (!(cin >> Matematika)) {
        cout << "Input bukan angka." << endl;
        return 1; // Keluar dari program dengan kode error
    }

    cout << "Masukkan Nilai Fisika : ";
    if (!(cin >> Fisika)) {
        cout << "Input bukan angka." << endl;
        return 1; // Keluar dari program dengan kode error
    }

    rerata = (Matematika + Fisika) / 2;

    if (rerata >= 60 || (Matematika >= 70 && rerata >= 50)) {
        status = "Lulus";
    }
    else {
        status = "Tidak lulus";
    }

    cout << "Status Kelulusan : " << status << endl;

    return 0;
}
