#include<iostream>
using namespace std;

class BaseProject{
public :
void input();
void proses();
void hargaa(int a);
void output();

private :
int nim,jumsks,paket,tambah;
string nama;
char pilih;
long harga=0, total;
float  hargatambahan, hargatotal, diskon;
int skstotal;
string matkul;
};


void BaseProject::input(){
  cout<<"Masukkan nama        : "; cin>>nama;
  cout<<"Masukkan NIM         : "; cin>>nim;
  cout<<"-------Menu Paket SKS------"<<endl; 
  cout<<"|1) paket semester 1 20sks|"<<endl;
  cout<<"|2) paket semester 2 21sks|"<<endl;
  cout<<"|3) paket semester 3 21sks|"<<endl;
  cout<<"---------------------------"<<endl;
  cout<<"Masukkan Paket Mata Kuliah : "; cin>>paket;
  cout<<"apakah ada tambahan sks(y/n) : "; cin>>pilih;
  if(pilih=='y')
    cout<<"Jumlah SKS tambahan : "; cin>>tambah;
}

void BaseProject::proses(){
  switch(paket){
    case 1: jumsks=20; 
            matkul="\n Daftar Matkul paket semster 1\n1) Al'Quran & Hadist(2sks)\n2) Dasar pemograman(3sks)\n3) Dasar Sistem Komputer(3sks)\n4) Kalkulus Informatika(3sks)\n5) Logika Informatika(3sks)\n6) Manajemen Data & Infor(3sks)\n7) Pancasila(2sks)\n8) Prak.Dasar pemograman(1sks)\n"; break;
    case 2: jumsks=21;
            matkul="\n Daftar Matkul paket semster 2\n1) Akhlak(2sks)\n2) Algoritma Pemograman(3sks)\n3) Aljabar linear matrix(2sks)\n4) Arsitektur komputer(3sks)\n5) Bahasa indonesia(2sks)\n6) Matematika Diskrit(3sks)\n7) Pemograman web(sks)\n8) PKN(2sks)\n9) Prak Alpro (1sks)\n"; break;
    case 3: jumsks=21;
            matkul="\n Daftar Matkul paket semster 3\n1) Aqidah Isalm(2sks)\n2) Bahasa Inggris(2sks)\n3) Basis Data(4sks)\n4) PBO(3sks)\n5) Sistem Operasi(2sks)\n6) Statistika Informatika(4sks)\n7) Struktur Data(3sks)\n";break;
  }
    
  skstotal=jumsks+tambah;
  hargatambahan=tambah*150000;
  hargatotal=harga+hargatambahan;
  diskon=hargatotal*25/100;
  total=hargatotal-diskon; 
    
}  
void BaseProject::hargaa(int a){
  if(a>=1) {
    harga=harga+150000;
    return hargaa(a-1);
  }
  
} 

void BaseProject::output(){
  cout<<"\n";
  cout<<"------------PENGAMBILAN SKS------------"<<endl;
  cout<<"Nama             : "<<nama<<endl;
  cout<<"NIM              : "<<nim<<endl;
  cout<<"Paket matkul yang diambil : "<<matkul<<endl;
  cout<<"Harga Paket      : "<<harga<<endl;
  cout<<"Tambahan SKS     : "<<tambah<<endl;
  cout<<"Harga tambahan   : "<<hargatambahan<<endl;
  cout<<"Jumlah SKS       : "<<skstotal<<endl;
  cout<<"Diskon           : "<<diskon<<endl;
  cout<<"Total pembayaran : "<<total<<endl;
}  