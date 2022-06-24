void paramatika::proses(){
  nama = new string[10];
  nim = new int[10];
//selection sort
   for (int i = 0; i<w-1;i++) {
    int	t=i;
        for(int j =i+1; j < w; j++){
            if(nimMhs[j]<nimMhs[t]){
            	t=j;
            }
        }
      int  temp = nimMhs[t];
        nimMhs[t] = nimMhs[i];
        nimMhs[i] = temp;

      string tempna = namaMhs[t];
        namaMhs[t] = namaMhs[i];
        namaMhs[i] = tempna;
     }
//ubah ke pointer
    for(int i=0;i<w;i++){
      *nim = nimMhs[i];
      nim +=1;
      *nama = namaMhs[i];
      nama +=1;
    }
}