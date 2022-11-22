#include <iostream>

using namespace std;

int pokok(int);
int lemburan(int);
int makanlemburan(int);
int transportlemburan(int);

int main(){
    
    int jam = 0, nip, gaji = 0, makan = 0, transport = 0, lembur = 0;
    string nama;

    cout << "\nXYZ Corporation Salary" << endl;
    cout << "========================" << endl;

    cout << "Enter your NIP: ";
    cin >> nip;
    cout << "Enter your name: ";
    cin >> nama;
    cout << "Enter your working hours: ";
    cin >> jam;

    gaji = pokok(jam);

    if(jam > 8){
      lembur = lemburan(jam);
    }
    if(jam >= 9){
      makan = makanlemburan(jam);
    }
    if(jam >= 10){
      transport = transportlemburan(jam);
    }

    cout << "\nEmployee Data" << endl;
    cout << "=========================" << endl;
    cout << "NIP                    : " << nip << endl;
    cout << "NAME                   : " << nama << endl;
    cout << "WORKING HOURS          : " << jam << endl;
    cout << "=========================" << endl;
    cout << "Main Salary            : Rp. " << gaji << endl;
    cout << "Overtime Salary        : Rp. " << lembur << endl;
    cout << "Extra Salary           : Rp. " << makan << endl;
    cout << "Transportation Salary  : Rp. " << transport << endl;

    return 0;    
}

int pokok(int jam){
  int hasil = jam * 7500;
  return hasil;
}

int lemburan(int jam){
  int hasil = (jam - 8) * 11250;
  return hasil;
}

int makanlemburan(int jam){
  int hasil = jam * 10000;
  return hasil;
}

int transportlemburan(int jam){
  int hasil = jam * 13000;
  return hasil;
}


