#include"../belanja.h"

void shopee::proses(){

  
//bagian hitung harga barang//
  belanja=0;
   for(int i=0; i<menu; i++){
    hargaitem[i]=harga[i]*bnyk[i];
    belanja=belanja+hargaitem[i];
   }
    //Bagian jasa pengiriman//

	switch(jasa){
    case 1:
      {
        kurir="j&t";
        ongkir=22000;
        break;
      }
    case 2: 
      {
        kurir="jne";
        ongkir=21000;
        break;
      }
    case 3: 
      {
        kurir="Reguler";
        ongkir=18000;
        break;
        }
    case 4: 
      {
        kurir="Kargo";
        ongkir=22000;
        break;
      }
    default:
      {
      cout<<"Jasa pengiriman tidak tersedia"<<endl;
      }
      
  }

  //bagian voucher
 if(belanja>5000000){
    cout<<"\n================================="<<endl;
    cout<<"Voucher tersedia"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"1. Diskon 10.000 min.Blj 100000"<<endl;
    cout<<"2. Diskon 7% min.Blj 1000000"<<endl;
    cout<<"3. Diskon 5% min.Blj 3000000 "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Pilih salah satu voucher : "; cin>>voucherr;
  }

 else if(belanja>1000000){
    cout<<"\n================================="<<endl;
    cout<<"Voucher tersedia"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"1. Diskon 10.000 min.Blj 100000"<<endl;
    cout<<"2. Diskon 7% min.Blj 1000000 "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Pilih salah satu voucher : "; cin>>voucherr;
 }

  else if (belanja>100000){
    cout<<"\n================================="<<endl;
    cout<<"Voucher tersedia"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"1. Diskon 10.000 min.Blj 100000"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Pilih salah satu voucher : "; cin>>voucherr;
  }

  else{
    voucher=0;
  }


switch(voucherr){
  case 1 : 
    {
      voucher=10000; 
      break;
    }
  case 2 : 
    {
      voucher=belanja*0.07; 
      break;
    }
  case 3 :
    {
      voucher=belanja*0.05; 
      break;
    }
}
pay://Bagian metode pembayaran
  cout<<"\n|===================|"<<endl;  
  cout<<"|Metode pembayaran  |"<<endl;
  cout<<"|-------------------|"<<endl;  
  cout<<"|1. Shopeepay       |"<<endl; 
  cout<<"|2. COD             |"<<endl;
  cout<<"|3. Indomaret       |"<<endl;
  cout<<"|4. Transfer bank   |"<<endl;
  cout<<"|-------------------|"<<endl; 
  cout<<"Metode pembayaran yang akan digunakan ? "; cin>>cara;
	switch(cara){
    case 1: 
      {
        metode="Shopeepay";
        if(saldo<belanja){
          cout<<"Shopeepay anda tidak cukup. Silahkan                           pilih metode pembayaran yang lain"<<endl;
          goto pay;
            }
            else{
            cout<<"\n=============================="            <<endl;
            cout<<"Voucher gratis ongkir 10 ribu "                  <<endl;
            cout<<"Gunakan voucher? (y/t) ";           cin>>diskonongkir;
            cout<<"-------------------------------"<<endl;
            if(diskonongkir='y'){
              gratong=10000;
            }
            
              }
        break;
      } 
    case 2: 
      {
        metode="COD";
        gratong=0;
         break;
        }
    case 3:
      {
        metode="Indomaret";
        gratong=0;
            break;
        }
    case 4: 
      {
      metode="Transfer bank";
        gratong=0;
            break;
      }
    default:
      {
        cout<<"Metode pembayaran tidak tersedia";
        break;
      }
  }


//Bagian proteksi
cout<<"\nHendak menggunakan proteksi tambahan (y/t) ? "; cin>>proteksi;
if(proteksi='y'){
  bproteksi=1500;
}
else{
  bproteksi=0;
}



//bagian total akhir 
total=belanja+ongkir-gratong-voucher+bproteksi;
 
  }
