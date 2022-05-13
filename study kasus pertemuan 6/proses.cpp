
#include"../base.h"

void BaseProject::proses(){


  
  
  for(i=0;i<matkul;i++){
    ratatugas=ratatugas+tugas[i];
    }
  ratatugas=ratatugas/matkul;

  for(i=0;i<matkul;i++){
    ratauts=ratauts+uts[i];
    }
  ratauts=ratauts/matkul;

  for(i=0;i<matkul;i++){
    ratauas=ratauas+uas[i];
    }
  ratauas=ratauas/matkul;
  
  for(i=0;i<matkul;i++)
  akhir[i]=0.2*tugas[i]+0.35*uts[i]+0.45*uas[i];
}

 for(i=0;i<matkul;i++){
    rataakhir=rataakhir+akhir[i];
    }
  rataakhir=rataakhir/matkul;
