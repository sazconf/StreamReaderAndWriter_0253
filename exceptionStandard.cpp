#include <iostream>
#include <exception>
#include <array>

using namespace std;

int main (){
    cout << "Awal Program " << endl;
    try{
        array<int, 3> data = {10, 20 ,30};
        //pesan array integer 3 elemen
        cout<< data.at(4) <<endl;
    }

    catch (exception &e)
    {
        //penagkap menggunakan obyek exception
        cout<< e.what() << endl;
        //
    }
    cout << "Baris Progra, Yang terakir" << endl;

    return 0;
}
