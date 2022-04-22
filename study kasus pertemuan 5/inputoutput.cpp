#include"../base.h"
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