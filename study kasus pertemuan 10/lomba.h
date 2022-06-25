#include<iostream>
#include<string.h>

using namespace std;

class paramatika{
  public:
    void input();
    void proses();
    void output();
  private :
    int w,cari,ketemu;
    int *nim;
    int nimMhs[10];
    string *nama;
    string namaMhs[10];
};

void paramatika::input(){
  cout<<"==============================================="<<endl;
	cout<<"    DATA FINALIS PARAMATIKA "<<endl;
	cout<<"==============================================="<<endl<<endl;
  cout<<"berapa data finalis = "; cin>>w;
  
  for(int i=0; i<w; i++){
      cout<<"data -"<<i+1<<endl;
      cout<<"Masukkan NIM  : ";
      cin>>nimMhs[i];
      cin.ignore();
      cout<<"Masukkan Nama  : ";
      getline(cin,namaMhs[i]);
      cout<<endl;
    }
}

void paramatika::proses(){
  nama = new string[10];
  nim = new int[10];
//selection sort
   for (int i = 0; i<w-1;i++) {
    int	t=i;
        for(int j =i+1; j < w; j++){
            if(nimMhs[j]<nimMhs[t]){
            	t=j;
            }
        }
      int  temp = nimMhs[t];
        nimMhs[t] = nimMhs[i];
        nimMhs[i] = temp;

      string tempna = namaMhs[t];
        namaMhs[t] = namaMhs[i];
        namaMhs[i] = tempna;
     }
//ubah ke pointer
    for(int i=0;i<w;i++){
      *nim = nimMhs[i];
      nim +=1;
      *nama = namaMhs[i];
      nama +=1;
    }
}

void paramatika::output(){
  nim-=w;
  nama-=w;
  cout<<"============================================"<<endl;
  cout<<"|          DATA FINALIS PARAMATIKA         |"<<endl;
  cout<<"============================================"<<endl;
  cout<<"Data Mahasiswa :"<<endl;
  cout<<"============================================";
  for(int i=0; i<w; i++){
    cout<<"\n\tNim  : ";
    cout<<*nim;
    nim+=1;
    cout<<"\n\tNama : ";
    cout<<*nama;
    nama+=1;
    cout<<endl;
    cout<<"--------------------------------------------";
  }
  cout<<endl<<endl;
  ulang :
  cout<<"Cari Nim : "; cin>>cari;
  ketemu=0;
  cout<<"================================================="<<endl;
  
 nim-=w;
nama-=w; 
  for(int i=0; i<w; i++){
      if(cari==nimMhs[i]){
        ketemu=1;
        cout<<"\n\tNim  : ";
        cout<<*nim;
        
        cout<<"\n\tNama : ";
        cout<<*nama;
        
        cout<<endl;
      }
      nim+=1;
      nama+=1;
   
  }
   if(ketemu==0){
      cout<<"\n---Mohon masukkan Nim dengan benar--\n"<<endl;
      goto ulang;
    }

}