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

    outfile.open(NamaFile + ".txt", ios ::out);

    cout << ">= Menulis File, \'q\' untuk keluar " << endl;
}
