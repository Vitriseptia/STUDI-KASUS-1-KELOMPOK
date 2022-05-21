#include"../belanja.h"

void shopee::input(){
  cout<<"|==================================|"<<endl;
	cout<<"|			        SHOPEE				      |"<<endl;
	cout<<"|==================================|"<<endl;
	cout<<"|Masukkan Akun Anda : 			        |"<<endl;
	cout<<"Username	: " cin>>un;
	cout<<"Password	: " cin>>ps;
  cout<<"|==================================|"<<endl;
	cout<<"|		 Masukkan identitas anda		  |"<<endl;
	cout<<"|==================================|"<<endl;
  cout<<" Nama lengkap   : " cin>>nama;
  cout<<" No HP          : " cin>>no;
  cout<<" Alamat lengkap : " cin>>alamat;
  cout<<endl;
  menu :
  cout<<"|==========================================|"<<endl;
	cout<<"|	           SELAMAT BERBELANJA	    	  	|"<<endl;
	cout<<"|==========================================|"<<endl;
  cout<<"|1.Fashion                                 |"<<endl;
  cout<<"|2.Elektronik                              |"<<endl;
  cout<<"|==========================================|"<<endl;
  cout<<"|Silahkan memilih barang :                 |"; cin>>pilih[j]; 
   for(int j=0; j<pilih; j++){
  switch(pilih){
    case 1: 
       cout<<"|==================================|"<<endl;
            cout<<"|          Menu FASHION            |"<<endl;
            cout<<"|==================================|"<<endl;
            cout<<"|a.Kaos                            |"<<endl;
            cout<<"|b.Kemeja                          |"<<endl;
            cout<<"|c.Celana                          |"<<endl;
            cout<<"|d.Rok                             |"<<endl;
            cout<<"|==================================|"<<endl;
            cout<<"|Masukkan pilihan anda :           |"; cin>>menuf;
            //vit pake perulangan nggasih?pas ini ngga usah mar soalnya udah awal itu kan
            if(menuf=='a'){
              cout<<"|=========================|"<<endl;
              cout<<"|Jenis barang  :          |"; cin>>jbrng[j];
              cout<<"|=========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang : "; cin>>bnyk[j];
            }
            else if(menuf=='b'){
              cout<<"|=========================|"<<endl;
              cout<<"|Jenis barang  :          |"; cin>>jbrng[j];
              cout<<"|=========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang : "; cin>>bnyk[j];
            }
            else if(menuf=='a'){
              cout<<"|=========================|"<<endl;
              cout<<"|Jenis barang  :          |"; cin>>jbrng[j];
              cout<<"|=========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang : "; cin>>bnyk[j];
            }
            else if (menuf=='b'){
              cout<<"|=========================|"<<endl;
              cout<<"|Jenis barang  :          |"; cin>>jbrng[j];
              cout<<"|=========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang :"; cin>>bnyk[j];
            }
            else{
              cout<<"Pilihan anda salah"<<endl;
            }
            break;
    case 2: cout<<"|==================================|"<<endl;
            cout<<"|          Menu ELEKTRONIK         |"<<endl;
            cout<<"|==================================|"<<endl;
            cout<<"|a.Smartphone                      |"<<endl;
            cout<<"|b.Laptop                          |"<<endl;
            cout<<"|==================================|"<<endl;
            cout<<"|Masukkan pilihan anda             |"; cin>>menue;
            if(menue=='a'){
              cout<<"|==========================|"<<endl;
              cout<<"|Jenis barang  :           |"; cin>>jbrng[j];
              cout<<"|==========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang :"; cin>>bnyk[j];
              }
            else if (menue=='b'){
              cout<<"|==========================|"<<endl;
              cout<<"|Jenis barang  :           |"; cin>>jbrng[j];
              cout<<"|==========================|"<<endl;
              cout<<"|Harga barang  : "; cin>>harga[j];
              cout<<"|Banyak barang :"; cin>>bnyk[j];
              }
            else{
              cout<<"Pilihan anda salah"<<endl;
              }
              break;
    //nah pas ini tu pake goto gt buatbsa balik milih menu nnti deh aku bantu kamu mar ini programu udah selesai? bagi aku udah sih ini aku salin trs aku jalanin dlu aja yaa nnti aku kabarin kmu klo ada salahan ok
  }  
  }
}

void shopee::output(){
  
cout<<"============================================================================"<<endl;
cout<<"                           INVOICE PEMBELANJAAN                             "<<endl;
cout<<"============================================================================"<<endl;
cout<<"RINCIAN ALAMAT : "<<endl;
cout<<" "<<nama<<endl;
cout<<"  "<<alamat<<endl;
cout<<"  "<<no<<endl;

cout<<"METODE PEMBAYARAN : "<<endl;
cout<<"  "<<metode<endl; 
cout<<"----------------------------------------------------------------------------"<<endl;
cout<<"RINCIAN PESANAN"<<endl; 
for(int j=0; j<pilih; j++) 
cout<<"  "  fashion
cout<<"  "<<jbarang[j]<<"\t\t\t "<<bnyk<<"x"<<"\t\t "<<"Rp."<<harga                       
cout<<"  "  elektronik
cout<<"----------------------------------------------------------------------------"<<endl;
cout<<"Subtotal untuk produk     "<<"\t\t\t "<<"Rp."<<belanja<<endl;                    
cout<<"Subtotal pengiriman-(J&T) "<<"\t\t\t "<<"Rp."<<ongkir<<endl;                 
cout<<"Total Diskon pengiriman   "<<"\t\t\t "<<"Rp."<<voucher<<endl;                  
cout<<"Total Diskon Barang       "<<"\t\t\t "<<"Rp."<<gratong<<endl;                      
cout<<"Biaya proteksi asuransi   "<<"\t\t\t "<<"Rp."<<bproteksi<<endl;                   
cout<<"----------------------------------------------------------------------------"<<endl;
cout<<"TOTAL PEMBAYARAN          "<<"\t\t\t "<<"Rp."<<total<<endl;                           
cout<<"----------------------------------------------------------------------------"<<endl;
}