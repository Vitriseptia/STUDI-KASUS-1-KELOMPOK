void datamhs::proses(){

   for (int i=0; i<c; i++){
            /*  //Desecending
             if (nim[i] < nim[i+1]) 
            {
               nim_temp=nim[i];
                nim[i]=nim[i+1];
                nim[i+1]=nim_temp;
              
              nama_temp=nama[i];
                nama[i]=nama[i+1];
                nama[i+1]=nama_temp;


               prd_temp=prd[i];
                prd[i]=prd[i+1];
                prd[i+1]=prd_temp;

              tlp_temp=tlp[i];
                tlp[i]=tlp[i+1];
                tlp[i+1]=tlp_temp;
            }
         */
    
             //Ascending
              if (nim[i] > nim[i+1]) 
            {
               nim_temp=nim[i];
                nim[i]=nim[i+1];
                nim[i+1]=nim_temp;
              
              nama_temp=nama[i];
                nama[i]=nama[i+1];
                nama[i+1]=nama_temp;


               prd_temp=prd[i];
                prd[i]=prd[i+1];
                prd[i+1]=prd_temp;

              tlp_temp=tlp[i];
                tlp[i]=tlp[i+1];
                tlp[i+1]=tlp_temp;
            }
              
          }
        }