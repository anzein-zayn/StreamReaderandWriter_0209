#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main()
{
    cout << "Awal Program " << endl;
    try
    {
        array<int, 3> data = {10, 20, 30};
        cout << "data.at (4)" << endl;
    }
    catch(exception &e)
    {
        cout << e.what() << endl;
        /* akan dieksekusi karena array data hanya memiliki 3 emelem*/
    }
    cout << "Bari Program yang Terakhir" << endl;
    /*penanda 2: bahwa program berjalan tnanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}