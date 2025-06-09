#include <fstream>

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
}
}