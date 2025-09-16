#include <iostream>
using namespace std;

int main(){
  int n, x, p, umur;
  int mainan = 0;
  int uang = 0;
  cout << "Masukkan Usia: ";
  cin >> n;
  cout << "Harga Mesin Cuci: ";
  cin >> x;
  cout << "Masukkan Harga Mainan: ";
  cin >> p;
  for (umur = 1; umur <= n; ++umur){
    if(umur % 2 == 0){
      //setiap genap +10 uang
      uang += (umur * 10 / 2) - 1;
    } else {
      //setiap ganjil +mainan
      mainan++;
    }
  }
  int total = uang + mainan * p;
  
  if (total >= x){
    cout << "Yes! " << "Total Tabungan: " << total << ", Sisa " << (total - x);
  } else {
    cout << "No! " << "Total Tabungan: " << total << ", Kurang " << (x - total);
  }
  return 0;
}