

void::output(){ cout<<"================================================================\n";
cout<<"|  Jenis Karyawan |   Nama     |   Alamat   |  Jenis Kelamin   |\n";   cout<<"================================================================\n";
  for(i=0; i<data; i++){
    for(j=0; j<1; j++){
     cout<<"| "<<karyawan[i][j]<<" |" 
    }
  }  
cout<<"================================================================\n";

ulang: 
		cout<<"masukkan jenis karyawan yang ingin dicari = "; cin>>cari;
		ketemu=0;
		for(i=0; i<data; i++){
      for(j=0; j<1; j++){
				if(cari==jenis[i]){
				ketemu=1;        cout<<"=================================================================\n;"  
		    cout<<"  Jenis Karyawan yang dicari : "<<cari<<endl;
cout<<"=================================================================\n;" 
		    cout<<"|  Jenis Karyawan |   Nama     |   Alamat   |  Jenis Kelamin   |\n"; 
				cout<<"| "<<karyawan[i][j]<<" |"
cout<<"=================================================================\n;"        
				}
				if (ketemu==0){
					cout<<"Mohon masukkan nama dengan benar"<<endl;
					goto ulang;
				}
			}
      }  

}
