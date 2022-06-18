#include<iostream>
#include<string.h>
using namespace std;
class buku{
  public :
    void input();
    void proses();
    void output();
  private :
    string buku1[50],buku[50][50],temp,cari;
    int bnyk;
    int i,j,k;
    int ketemu;
  

};
void buku::input (){
  cout<<"----------------"<<endl;
  cout<<"LIST BUKU SABRINA"<<endl;
  cout<<"----------------"<<endl;
  cout<<"berapa data buku : "; cin>>bnyk;
  cout<<"----------------"<<endl;
 
	cin.ignore();
  for(i=0; i<bnyk; i++){
  	k=i*3;
  	cout<<"Buku ke -"<<i+1<<endl;
    cout<<"Masukan jenis buku = "; getline(cin,buku1[k]);
    cout<<"Masukan Judul buku = "; getline(cin,buku1[k+1]);
    cout<<"Masukan Pengarang = "; getline(cin,buku1[k+2]);
  }
  
}

void buku::proses (){
//ubah erray 2 dimensi
k=0;
for(i=0; i<bnyk; i++){
	for(j=0;j<3;j++){
		buku[i][j]=buku1[k];
		k++;
	}
  }


//mengurutkan
for(k=0;k<3;k++){
for(i=0; i<bnyk;i++){
  for(j=1;j<bnyk+1;j++){
  	if(buku[i][j]!=buku[i][j]){
     temp=buku[i][k];
     buku[i][k]=buku[j][k];
     buku[j][k]=temp;
    }	
    }
  }
}
  }

  
void buku::output(){

  cout<<endl;
  cout<<"================================================="<<endl;
  cout<<"|               LIST BUKU SABRINA               |"<<endl;
  cout<<"================================================="<<endl;
  cout<<"|   JENIS BUKU   |      JUDUL     |   PENULIS   |"<<endl;
  for(int k=0; k<bnyk; k++){
    for(int l=0; l<3; l++){
      cout<<"| "<<buku[k][l]<<"\t";
    }
    cout<<endl;
  }
  cout<<"================================================="<<endl;
  cout<<endl;
  ulang :
  cin.ignore();
  cout<<"Masukkan Judul Buku yang ingin dicari : "; getline(cin,cari);
  cout<<endl;
  ketemu=0;
  cout<<"Judul buku yang dicari : "<<cari<<endl;
  cout<<"================================================="<<endl;
  cout<<"|   JENIS BUKU   |      JUDUL     |   PENULIS   |"<<endl;

  for(int k=0; k<bnyk; k++){
      if(cari==buku[k][1]){
        ketemu=1;
        for(int l=0; l<3; l++){
          cout<<"| "<<buku[k][l]<<"\t";
        }
        cout<<endl;
      }
    if(ketemu==0){
      cout<<"\n---Mohon masukkan Judul Buku dengan benar--\n"<<endl;
      goto ulang;
    }
  }
}