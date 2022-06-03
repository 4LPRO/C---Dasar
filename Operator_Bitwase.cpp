#include <iostream>
 
using namespace std;
 
int main()
{
  int a;
  int b;
  int hasil;
  
  cout<<"Masukkan Nilai A : ";
  cin>>a;
  cout<<"Masukkan Nilai B : ";
  cin>>b;
  hasil = a & b;
  cout << "Hasil dari a & b : " << hasil << endl;
 
  hasil = a | b;
  cout << "Hasil dari a | b : " << hasil << endl;
 
  hasil = a ^ b;
  cout << "Hasil dari a ^ b : " << hasil << endl;
 
  hasil = ~a;
  cout << "Hasil dari ~a : " << hasil << endl;
 
  hasil = a >> 1;
  cout << "Hasil dari a >> 1 : " << hasil << endl;
 
  hasil = b << 2;
  cout << "Hasil dari b << 2 : " << hasil << endl;
 
  return 0;
}