using namespace std;

class Input{
public :
void cetak(){
  cout<<"Aplikasi layanan menabung \n";
  cout<<"Uang saku tiap bulan : "; cin>>saku;
  cout<<"Lama menabung(bulan) : "; cin>>bulan;
  
}
  
void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data<<saku<<endl;
  tulis_data<<bulan<<endl;
  tulis_data<<a;
  tulis_data.close();
}
  
private:
ofstream tulis_data; 
int i, saku, bulan, tabungan[50];
int tot = 3000;
int a = tot*bulan;
};
