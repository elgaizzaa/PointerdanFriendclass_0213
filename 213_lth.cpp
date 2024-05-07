#include <iostream>
using namespace std;

class PersegiPanjang
 {
    public :
    int Panjang,Lebar;
     int LuasPersegiPanjang(int b, int a)
    {
        return a*b;
    }
 };

 class segitiga
 {
    public :
    int tinggi, alas;
     int LuasSegitiga(int a, int t)
    {
            return 0.5*a*t;
    }
   int hitung(PersegiPanjang p)
   {
        return p.Panjang;
    }
 };

 int main()
 {
    PersegiPanjang pp;
      segitiga sg;
      cout << "masukan Panjang: ";
      cin >> "pp.Panjang: ";
     cout << "masukan Lebar :";
     cin >> "pp.Lebar: ";
     cout << "masukan tinggi: ";
     cin >> "sg.tinggi: ";
     cout <<"masukan alas:";
     cin >>"sg.alas: ";
     cout <<"luas Persegi Panjang :" << pp.LuasPersegiPanjang(pp.Panjang,pp.Lebar)<<endl;
     cout << "Luas Segitiga: " << sg. LuasSegitiga (sg.alas,sg.tinggi) <<endl;
 };
 
 