#include<iostream>
using namespace std;
int main()
{
    char jawab; 
    unsigned int jumlahmalam;
    float hargarata =50; // harga rata adalah harga normal jika belum pernah menginap
    float hargadiskon =30; // harga diskon jika sudah pernah menginap
    float totalharga; // berikut adalah data-data variabel

    cout<<"Berapa malam tamu menginap :";
    cin>>jumlahmalam;
    cout<<"Apakah tamu tersebut pernah menginap (Y/T) :";
    cin>>jawab;

    if (jawab=='Y'||jawab=='y')
{
        totalharga=hargadiskon*jumlahmalam; // perhitungan harga dikali lama menginap
        cout<<"total biaya menginap : US $" << totalharga << endl; 
}

    else 
        if (jawab=='T'||jawab=='t')
        {
            totalharga=hargarata*jumlahmalam; // perhitungan harga dikali lama menginap
            cout<<"total biaya menginap : US $" << totalharga <<endl;
        }   
    else
        cout << "salah menekan tombol ... !\n"; // keterangan jika tidak menulis Y atau T

return 0;
}
