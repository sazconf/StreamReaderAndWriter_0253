#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main (){
    string baris;

    //membuat obyek output file stream dalam mode menulis
    ofstream outfile;

    //membuka file
    outfile.open("contohfile.txt");

    cout<< ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis

    while (true){
    cout << "-";
    //mendapatkan setiap charackter dalam  satu baris

    getline(cin, baris);
    //loop akan berhenti jika anda memasukkan character q

    if (baris== "q")
        break;

    //menulisdan memasukkan nilai dari baris ke dalam file 
    outfile<<baris<<endl;
}

