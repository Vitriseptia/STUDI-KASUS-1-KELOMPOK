void::output(){
  cout<<"============================================"<<endl;
  cout<<"|           DATA FINALIS PARAMATIKA        |"<<endl;
  cout<<"============================================"<<endl;
  cout<<"Data Mahasiswa :"<<endl;
  for(int i=0; i<w; i++){
    cout<<"\nData ke-"<<i+1<<" : "<<endl;
    cout<<*nama;
    nama+=1;
    cout<<"Nim : ";
    cout<<*nim;
    nim+=1;
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