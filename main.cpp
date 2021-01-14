#include <iostream>
using namespace std;

int main() {

double ort=0;
int adet=0;
int toplam=0 ;


  for (int i=100 ; i <= 200 ; i=i+2)
  {

     toplam = toplam + i;
     adet = adet + 1;
   
  }

  ort = (toplam/adet);
  cout << "ortalama = " << ort ; 
 
}