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