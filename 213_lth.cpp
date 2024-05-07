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
  
 }
 
 