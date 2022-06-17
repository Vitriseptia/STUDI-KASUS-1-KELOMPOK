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