#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;

class datamhs{
  public :
    void input();
    void proses();
    void output();
  private :
    int c, ketemu;
    
    string nama[50],prd[50],nama_temp, prd_temp;
    long nim[50],tlp[50],no,nim_temp, tlp_temp ;
};


void datamhs::input(){
  cout<<"====================================\n";
  cout<<"PROGRAM MENGURUTKAN DATA MAHASISWA\n";
  cout<<"------------------------------------\n";
  cout<<"Masukkan jumlah Mahasiswa : "; cin>>c;
  for(int i=0; i<c; i++){
  cout<<"Data ke-"<<i+1<<endl;
  cout<<"Masukkan nama Mahasiswa : "; cin>>nama[i];
  cout<<"Masukkan  Nim : "; cin>>nim[i];
  cout<<"Masukkan Prodi : "; cin>>prd[i];
  cout<<"Masukkan No.Telp : +62"; cin>>tlp[i]; 
  }
  cout<<"\nMasukkan Nim yang ingin dicari : "; cin>>no;
}
void datamhs::proses(){

   for (int j=0; j<c; j++){
            /*  //Desecending
            if (nim[j] <nim[j+1]) 
            {
               nim_temp=nim[j];
                nim[j]=nim[j+1];
                nim[j+1]=nim_temp;
              
              nama_temp=nama[j];
                nama[j]=nama[j+1];
                nama[j+1]=nama_temp;


               prd_temp=prd[j];
                prd[j]=prd[j+1];
                prd[j+1]=prd_temp;

              tlp_temp=tlp[j];
                tlp[j]=tlp[j+1];
                tlp[j+1]=tlp_temp;
            }
         */
    
             //Ascending
              if (nim[j] > nim[j+1]) 
            {
               nim_temp=nim[j];
                nim[j]=nim[j+1];
                nim[j+1]=nim_temp;
              
              nama_temp=nama[j];
                nama[j]=nama[j+1];
                nama[j+1]=nama_temp;


               prd_temp=prd[j];
                prd[j]=prd[j+1];
                prd[j+1]=prd_temp;

              tlp_temp=tlp[j];
                tlp[j]=tlp[j+1];
                tlp[j+1]=tlp_temp;
            }
              
          }
        }

void datamhs::output(){
  cout<<"=========================================\n";
  cout<<"            DATA MAHASISWA               \n";
  cout<<"-----------------------------------------\n";
cout<<"Diurutkan berdasarkan Nim:\n";
  for(int i=0; i<c; i++){
          cout<<"\nNim     : "<<nim[i]<<endl;
          cout<<"Nama    : "<<nama[i]<<endl;
          cout<<"Prodi   : "<<prd[i]<<endl;
          cout<<"No.Telp : "<<tlp[i]<<endl;
 
    }
  ketemu=0;
  for(int i=0; i<c ;i++){
    if(no==nim[i])
    {
      ketemu=1;
      cout<<"-----------------------------------"<<endl;
      cout<<"  data yang dicari :"<<no<<endl;
      cout<<"-----------------------------------"<<endl;
      cout<<"\nData ditemukan pada indeks ke-"<<i<<endl;
      cout<<"Nama    : "<<nama[i]<<endl;
      cout<<"Nim     : "<<nim[i]<<endl;
      cout<<"Prodi   : "<<prd[i]<<endl;
      cout<<"No.telp : +62"<<tlp[i]<<endl;
    }
  }
  if(ketemu==0){
    cout<<"Data tidak ditemukan";
  }
}
#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;

class datamhs{
  public :
    void input();
    void proses();
    void output();
  private :
    int c, ketemu;
    
    string nama[50],prd[50],nama_temp, prd_temp;
    long nim[50],tlp[50],no,nim_temp, tlp_temp ;
};


void datamhs::input(){
  cout<<"====================================\n";
  cout<<"PROGRAM MENGURUTKAN DATA MAHASISWA\n";
  cout<<"------------------------------------\n";
  cout<<"Masukkan jumlah Mahasiswa : "; cin>>c;
  for(int i=0; i<c; i++){
  cout<<"Data ke-"<<i+1<<endl;
  cout<<"Masukkan nama Mahasiswa : "; cin>>nama[i];
  cout<<"Masukkan  Nim : "; cin>>nim[i];
  cout<<"Masukkan Prodi : "; cin>>prd[i];
  cout<<"Masukkan No.Telp : +62"; cin>>tlp[i]; 
  }
  cout<<"\nMasukkan Nim yang ingin dicari : "; cin>>no;
}
void datamhs::proses(){

   for (int j=0; j<c; j++){
            /*  //Desecending
            if (nim[j] <nim[j+1]) 
            {
               nim_temp=nim[j];
                nim[j]=nim[j+1];
                nim[j+1]=nim_temp;
              
              nama_temp=nama[j];
                nama[j]=nama[j+1];
                nama[j+1]=nama_temp;


               prd_temp=prd[j];
                prd[j]=prd[j+1];
                prd[j+1]=prd_temp;

              tlp_temp=tlp[j];
                tlp[j]=tlp[j+1];
                tlp[j+1]=tlp_temp;
            }
         */
    
             //Ascending
              if (nim[j] > nim[j+1]) 
            {
               nim_temp=nim[j];
                nim[j]=nim[j+1];
                nim[j+1]=nim_temp;
              
              nama_temp=nama[j];
                nama[j]=nama[j+1];
                nama[j+1]=nama_temp;


               prd_temp=prd[j];
                prd[j]=prd[j+1];
                prd[j+1]=prd_temp;

              tlp_temp=tlp[j];
                tlp[j]=tlp[j+1];
                tlp[j+1]=tlp_temp;
            }
              
          }
        }

void datamhs::output(){
  cout<<"=========================================\n";
  cout<<"            DATA MAHASISWA               \n";
  cout<<"-----------------------------------------\n";
cout<<"Diurutkan berdasarkan Nim:\n";
  for(int i=0; i<c; i++){
          cout<<"\nNim     : "<<nim[i]<<endl;
          cout<<"Nama    : "<<nama[i]<<endl;
          cout<<"Prodi   : "<<prd[i]<<endl;
          cout<<"No.Telp : "<<tlp[i]<<endl;
 
    }
  ketemu=0;
  for(int i=0; i<c ;i++){
    if(no==nim[i])
    {
      ketemu=1;
      cout<<"-----------------------------------"<<endl;
      cout<<"  data yang dicari :"<<no<<endl;
      cout<<"-----------------------------------"<<endl;
      cout<<"\nData ditemukan pada indeks ke-"<<i<<endl;
      cout<<"Nama    : "<<nama[i]<<endl;
      cout<<"Nim     : "<<nim[i]<<endl;
      cout<<"Prodi   : "<<prd[i]<<endl;
      cout<<"No.telp : +62"<<tlp[i]<<endl;
    }
  }
  if(ketemu==0){
    cout<<"Data tidak ditemukan";
  }
}
