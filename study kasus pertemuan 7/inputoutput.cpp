void datamhs::input(){
  cout<<"====================================\n";
  cout<<"PROGRAM MENGURUTKAN DATA MAHASISWA\n";
  cout<<"------------------------------------\n";
  cout<<"Masukkan jumlah Mahasiswa"; cin>>c;
  for(int i=0; i<c; i++){
  cout<<"Data ke-"<<i+1<<endl;
  cout<<"Masukkan nama Mahasiswa :\n"; cin>>siswa[i].nama;
  cout<<"Masukkan  Nim :\n"; cin>>siswa[i].nim;
  cout<<"Masukkan Prodi :\n"; cin>>siswa[i].prd;
  cout<<"Masukkan No.Telp :\n"; cin>>siswa[i].telp; 
  }
  cout<<"Masukkan Nim yang ingin dicari : "; cin>>no;
  
}

void datamhs::output(){
  cout<<"=========================================\n";
  cout<<"            DATA MAHASISWA               \n";
  cout<<"-----------------------------------------\n";
  cout<<"Diurutkan berdasarkan Nim :\n";
  for(int i=0; i<c; i++){
    cout<<"Nim     : "<<siswa[i].nim<<endl;
    cout<<"Nama    : "<<siswa[i].nama<<endl;
    cout<<"Prodi   : "<<siswa[i].prd<<endl;
    cout<<"No.Telp : "<<siswa[i].telp<<endl;
  }
  cout<<"\n\n";
  ketemu=0;
  for(int i=1; i<c ;i++){
    if(no==siswa[i].nim)
    {
      ketemu=1;
      cout<<"Data ditemukan pada indeks ke-"<<i<<endl;
      cout<<"Nama    : "<<siswa[i].nama<<endl;
      cout<<"Nim     : "<<siswa[i].nim<<endl;
      cout<<"Prodi   : "<<siswa[i].prd<<endl;
      cout<<"No.telp : "<<siswa[i].telp<<endl;
    }
  }
  else cout<<"Data tidak ditemukan";
}