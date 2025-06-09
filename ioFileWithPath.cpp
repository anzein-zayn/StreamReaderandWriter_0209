#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;
    string NamaFile;

    cout << "Enter File Name : " ;
    cin >> NamaFile;
    //membuat obyek output input file stream dalam mode menulis
    ofstream outfile;
    //membuka file
    outfile.open(NamaFile + ".txt");
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
  outfile.close();
    //membuat obyek input file steram dalam mode membaca
    ifstream infile;
    infile.open(NamaFile + ".txt");
    cout << endl << ">= Membuka dan membaca file " << endl;
    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
        infile.close();
    }
    else
        cout << "Unable to open file";
    return 0;
  
}