#include <iostream>

using namespace std;

int main(){
int a, b, c;
cout<<"Masukkan Nilai A : ";
cin>>a;
cout<<"Masukkan Nilai A : ";
cin>>b;
c = a*b;
cout<<"Hasil Operator Perkalian   : "<<a<<" x "<<b<<" = "<<c;
cout<<endl;
c = a/b;
cout<<"Hasil Operator Pembagian   : "<<a<<" / "<<b<<" = "<<c;
cout<<endl;
c = a+b;
cout<<"Hasil Operator Penjumlahan : "<<a<<" + "<<b<<" = "<<c;
cout<<endl;
c = a-b;
cout<<"Hasil Operator Pengurangan : "<<a<<" - "<<b<<" = "<<c;
cout<<endl;
c = a%b;
cout<<"Hasil Operator Modulus     : "<<a<<" % "<<b<<" = "<<c;
cout<<endl;
    return 0;
}
