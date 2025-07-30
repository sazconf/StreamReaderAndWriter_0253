#include <iostream>
using namespace std;

int main (){
    try {
        cout<< "Selamat Belajar di Prodi TI UMY" <<endl;
        throw("Hello"); //
        cout << " Pernyataan tidak akan dieksekusi";

    }

    catch (int a){
        //blak ini akan deiksekusi


        cout << "Pengecualian akan dieksekusi" << endl;

    }
    catch (...){
        /*Jika selain integer maka block ini akan deksusi*/
        cout<< "Default Pengecualian diexsekusi";
    
    } 
    
    return 0;

}