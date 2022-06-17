
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