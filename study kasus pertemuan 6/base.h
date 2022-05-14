
#include<iostream>
using namespace std;

class BaseProject{
public :
void input();
void proses();
void output();

private :
int i, matkul;
int bnyk;
string nama[20];
string nmatkul[24];
int tugas[5];
int uts[5];
int uas[5];
int akhir[5];
float ratatugas=0, ratauas=0 ,rataakhir=0, ratauts=0;
};

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


void BaseProject::proses(){
  int i;
  for(int i=0; i<bnyk; i++){
     for(int i=0;i<matkul;i++){
   akhir[i]=(0.2*tugas[i])+(0.35*uts[i])+(0.45*uas[i]);
}
  for(int i=0;i<matkul;i++){
    ratatugas=ratatugas+tugas[i];
    }
  ratatugas=ratatugas/matkul;

  for(int i=0;i<matkul;i++){
    ratauts=ratauts+uts[i];
    }
  ratauts=ratauts/matkul;

  for(int i=0;i<matkul;i++){
    ratauas=ratauas+uas[i];
    }
  ratauas=ratauas/matkul;
  

 for(int i=0;i<matkul;i++){
    rataakhir=rataakhir+akhir[i];
    }
  rataakhir=rataakhir/matkul;
}
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