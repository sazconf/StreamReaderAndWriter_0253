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

    