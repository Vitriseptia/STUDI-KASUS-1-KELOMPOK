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