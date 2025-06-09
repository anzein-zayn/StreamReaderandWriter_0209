#include <fstream>>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;

    //membuat obyek output input file stream dalam mode menulis
    ofstream outfile;
    //membuka file
    outfile.open("contoh.txt");
    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unclimited loop untuk menulis
    while(true)
    {
        cout << "-";
        //mendapatkan setiap karakter dalam satu baris
        getline (cin, baris);
        //loop akan berhenti jika anda memasukkan karater 4
        if (baris == "q")
        break;
        //menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }

  
}