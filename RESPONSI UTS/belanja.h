#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;

class shopee{
public :
void input();
void proses();
void output();

private :
string un,ps,nama;
long no;
string alamat;
long harga[100], hargaitem[100], saldo, bnyk[100];
int menu, proteksi, jasa, cara;
char  diskonongkir;
string barang[100], kurir, metode;
char lagi;
long  ongkir, voucher;
int voucherr; 
float gratong;
float  bproteksi;
long belanja,total;

};
void shopee::input(){
  cout<<"|==================================|"<<endl;
  cout<<"|              SHOPEE              |"<<endl;
  cout<<"|==================================|"<<endl;
  cout<<"| Masukkan Akun Anda                "<<endl;
  cout<<"| Username : "; cin>>un;
  cout<<"| Password : "; cin>>ps;
  cout<<"|==================================|"<<endl;
  cout<<"|      Masukkan identitas anda     |"<<endl; 
  cout<<"|==================================|"<<endl;
  cin.ignore();
  cout<<"| Nama lengkap   : "; getline(cin,nama); 
  cout<<"| Alamat lengkap : "; getline(cin,alamat);
  cout<<"| No HP          : +62"; cin>>no;
  cout<<"| Saldo Shopeepay: "; cin>>saldo;
  cout<<"|----------------------------------|"<<endl;
  do
    {
      cout<<"\n|==========================================|"<<endl;
      cout<<"|             SELAMAT BERBELANJA           |"<<endl;
      cout<<"|==========================================|"<<endl;
      cout<<"|1.Fashion                                 |"<<endl;
      cout<<"|  a.Kaos               Rp.  40.000        |"<<endl;
      cout<<"|  b.Kemeja             Rp.  50.000        |"<<endl;
      cout<<"|  c.Celana             Rp.  100.000       |"<<endl;
      cout<<"|  b.Rok                Rp.  30.000        |"<<endl;
      cout<<"|2.Elektronik                              |"<<endl;
      cout<<"|  a.Smartphone         Rp.  500.000       |"<<endl;
      cout<<"|  b.Laptop             Rp.  2.000.000     |"<<endl;
      cout<<"|==========================================|"<<endl;
      cout<<"|berapa banyak barang pilihan : "; cin>>menu;
      cout<<endl;
      for(int i=0; i<menu; i++)
      {
        cout<<"|--------------------------------------|\n";
        cout<<"|barang ke-"<<i+1<<endl;
        cout<<"|Masukkan Nama Barang    : "; cin>>barang[i];
        cout<<"|Masukkan Harga Barang   : Rp."; cin>>harga[i];
        cout<<"|Masukkan Banyak Barang  : "; cin>>bnyk[i];
      }
      cout<<"\ningin menambah barang (y/t) ? "; cin>>lagi;
    }
    while (lagi!= 't');
    cout<<endl;
  cout<<"=============================="<<endl;
  cout<<"Jasa pengiriman yang tersedia             "<<endl;
  cout<<" 1. j&t\n 2. jne\n 3. Reguler\n 4. Kargo  "<<endl;
  cout<<"------------------------------"<<endl;
  cout<<"jasa pengiriman yang akan digunakan ? "; cin>>jasa;

  
}

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

   

void shopee::output(){
ofstream tulis_data;
tulis_data.open("invoice.txt");
tulis_data<<"=================================================================="<<endl;
tulis_data<<"                           INVOICE PEMBELANJAAN                   "<<endl;
tulis_data<<"=================================================================="<<endl;
tulis_data<<"RINCIAN ALAMAT : "<<endl;
tulis_data<<"  "<<nama<<endl;
tulis_data<<"  "<<alamat<<endl;
tulis_data<<"  +62"<<no<<endl;

tulis_data<<"METODE PEMBAYARAN : "<<endl;
tulis_data<<"  "<<metode<<endl;
tulis_data<<"------------------------------------------------------------------"<<endl;
tulis_data<<"RINCIAN PESANAN :"<<endl; 
for(int i=0; i<menu; i++){
  tulis_data<<i+1<<")  "<<barang[i]<<"\t\t\t\t"<<bnyk[i]<<"x"<<"\t\t\t\t"<<hargaitem[i]<<endl;
}
  
tulis_data<<"-----------------------------------------------------------------"<<endl;
tulis_data<<"Subtotal untuk produk     "<<"\t\t\t "<<"Rp."<<belanja<<endl;                    
tulis_data<<"Subtotal pengiriman  ("<<kurir<<")"<<"\t\t\t "<<"Rp."<<ongkir<<endl;                 
tulis_data<<"Total Diskon pengiriman   "<<"\t\t\t "<<"Rp."<<gratong<<endl;                  
tulis_data<<"Total Diskon Barang       "<<"\t\t\t "<<"Rp."<<voucher<<endl;                      
tulis_data<<"Biaya proteksi asuransi   "<<"\t\t\t "<<"Rp."<<bproteksi<<endl;                   
tulis_data<<"-----------------------------------------------------------------"<<endl;
tulis_data<<"TOTAL PEMBAYARAN          "<<"\t\t\t "<<"Rp."<<total<<endl;                           
tulis_data<<"-----------------------------------------------------------------"<<endl;
  tulis_data.close();

}