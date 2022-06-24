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
  }
  
}