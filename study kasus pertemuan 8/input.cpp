void::input(){
  cout<<"=============================================="<<endl;
	cout<<" 	PERUSAHAAN PT LANCAR JAYA "<<endl;
	cout<<"==============================================="<<endl<<endl;
  cout<<"Berapa karyawan yang ingin di data "; cin>>data;
  for(i=0; i<data; i++){
    cout<<"Jenis Karyawan = "; getline(cin,jenis[i]);
    cout<<"Nama           = "; getline(cin,nama[i]);
    cout<<"Alamat         = "; getline(cin,alamat[i]);
    cout<<"Jenis Kelamin  = "; cin>>jk[i];
  }
  
}
