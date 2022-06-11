#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class karyawan{
  public :
    void input();
    void proses();
    void output();
  private :
  string karyawan1[50][50],karyawan1_temp, cari,b[50];
	int i,j,n, jenis,a[50][50];
	int data,ketemu;

};

void karyawan::input(){
  cout<<"=============================================="<<endl;
	cout<<" 	PERUSAHAAN PT LANCAR JAYA "<<endl;
	cout<<"==============================================="<<endl<<endl;
  cout<<"Berapa karyawan yang ingin di data = "; cin>>data;
  cout<<"Jumlah jenis karyawan : ";cin>>jenis;
  cout<<"Jenis karyawan : \n";
  for(i=0; i<jenis; i++){
	cout<<i+1<<". "; 
	cin>>b[i];
}

  for(int i=0; i<data; i++){
    
    cout<<"\nKaryawan "<<i+1<<endl;
    cout<<"Jenis Karyawan(1,2,3,...) = ";cin>>a[i][0];
    cin.ignore();
    cout<<"Nama           = "; getline(cin,karyawan1[i][1]);
    cout<<"Alamat         = "; getline(cin,karyawan1[i][2]);
    cout<<"Jenis Kelamin  = "; cin>>karyawan1[i][3];
  }
  
	 
  }

void karyawan::proses(){
  
  for(i=0;i<data;i++){
  	for(j=0;j<jenis;j++){
  	if(a[i][0]==j+1){
  		karyawan1[i][0]=b[j];
	  }
}
    }
  
  for(int i=0;i<data-1;i++){
		for(int j=i+1;j<data;j++){
			for(int k=0;k<4;k++){
				if(a[i][0]>a[j][0]){
				karyawan1_temp=karyawan1[i][k];
				karyawan1[i][k]=karyawan1[j][k];
				karyawan1[j][k]=karyawan1_temp;
			}
			
			}
		}
	}
}
void karyawan::output(){
cout<<endl<<endl; cout<<"================================================================\n";
cout<<"|  Jenis Karyawan |   Nama     |   Alamat   |  Jenis Kelamin   |\n";   cout<<"================================================================\n";
  for(int i=0; i<data; i++){
    for(int j=0; j<4; j++){
     cout<<"|   "<<karyawan1[i][j]<<" \t";
    }
    cout<<endl;
  }  
cout<<"================================================================\n"; 

  ulang : 
    cout<<"\nmasukkan jenis yang ingin anda cari = "; cin>>cari;
    cout<<endl;
    ketemu=0;
    cout<<"=============================================="<<endl;
    cout<<"jenis karyawan yang di cari :"<<cari<<endl;
    cout<<"=============================================="<<endl;
    cout<<"| Jenis  | Nama  | alamat | jenis kelamin |"<<endl;
    cout<<"----------------------------------------------"<<endl;
    for(int i=0; i<data; i++){
        if(cari == karyawan1[i][0]){
        ketemu=1;
        
          for(int j=0;j<4;j++){
            cout<<"| "<<karyawan1[i][j]<<"    ";
          }
            cout<<endl;
        }
        if (ketemu=0){
          cout<<"Mohon masukan data dengan benar"<<endl;
          goto ulang;
        }
      
    }
}