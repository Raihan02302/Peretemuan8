#include <iostream>

using namespace std;

struct sepeda{
    string merk;
    string type;
    int tahun;
    string harga;
};

int main(){
    sepeda sepedaA;

    sepedaA.merk = "Genio M-3411";
    sepedaA.type = "Sepeda Gunung";
    sepedaA.harga = "1.800.000";
    sepedaA.tahun = 2013;

    cout<<"Merk = "<<sepedaA.merk <<endl;
    cout<<"Type = "<<sepedaA.type <<endl;
    cout<<"Tahun = "<<sepedaA.tahun<<endl;
    cout<<"Harga = "<<sepedaA.harga<<endl;

    cout<<endl;

    //cout<<"Akses member dengan Pointer : "<<endl;

    sepeda sepedaP;

    sepedaP.merk = "Polygon Premier 4";
    sepedaP.type = "Sepeda Gunung";
    sepedaP.harga = "4.200.000";
    sepedaP.tahun = 2019;

    sepeda* ptrSepeda = &sepedaP;

    cout << "Merk = " << ptrSepeda->merk << endl;
    cout << "Type = " << ptrSepeda->type << endl;
    cout << "Tahun = " << ptrSepeda->tahun << endl;
    cout << "Harga = " << ptrSepeda->harga << endl;

return 0;
}
