#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main ()
{
    string baris;
    string namafile;

    cout << "Masukkan Nama File: ";
    cin >> namafile;

    // Membuka file untuk menulis
    ofstream outfile;
    outfile.open(namafile + ".txt", ios::out);

    cout << ">= Menulis file, 'q' untuk keluar" << endl;

    // flush newline character after cin
    cin.ignore();

    while(true){
        cout << "- ";
        getline(cin, baris);

        if (baris == "q")
            break;

        outfile << baris << endl;
    }

    outfile.close(); // optional but good practice

    return 0;
}
