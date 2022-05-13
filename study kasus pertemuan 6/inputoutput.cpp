#include"../base.h"

void BaseProject::input(){
  cout<<"berapa mahasiswa ? "; cin>>bnyk;
  for(int i=0; i<bnyk; i++){ 
    cout<<"Masukkan nama Mahasiswa     : "; cin>>nama[i];
  cout<<"Mau input berapa Mata kuliah ? " ;cin>>matkul;
  for(int j=0; j<matkul; j++){
  cout<<"Masukkkan mata kuliah ke " << j+1 <<" : "; cin>>nmatkul[j];
    cout<<"Masukkan nilai TUGAS "<<" : "; cin>>tugas[j];
    cout<<"Masukkan nilai UTS "<<" : "; cin>>uts[j];
    cout<<"Masukkan nilai UAS "<<" : "; cin>>uas[j];
    }
    cout<<endl;
  }
    cout<<endl;
  }

void BaseProject::output(){
cout<<"==========================================================="<<endl;
cout<<"||               DAFTAR NILAI MAHASISWA                  ||"<<endl;
cout<<"==========================================================="<<endl;
  cout<<endl;
  
for(int i=0; i<bnyk; i++){
  cout<<"Nama : "<<nama[i]<<endl; cout<<"==========================================================="<<endl;
  cout<<"Mata kuliah      || Tugas || UTS || UAS ||\tNilai Akhir ||"<<endl;
  cout<<"==========================================================="<<endl;
  for(int j=0;j<matkul; j++){
  cout<<nmatkul[j]<<" \t\t\t\t  "<<tugas[j]<<"  \t  "<<uts[j]<<"  \t "<<uas[j]<<" \t\t"<<akhir[j]<<endl;
     } 
  cout<<"==========================================================="<<endl;
  
  cout<<"Nilai Rata-rata  ||   "<<ratatugas<<" \t "<<ratauts<<"  \t "<<ratauas<<" \t\t "<<rataakhir<<endl;
  cout<<endl;
 } 
  }