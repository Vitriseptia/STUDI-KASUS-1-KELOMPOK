using namespace std;

class Input{
public :
void cetak(){
  cout<<"Aplikasi layanan penyediaan hosting \n";
  cout<<"  Hosthing yang tersedia : ";
  cout<<"1) Shared Hosting  : 300ribu\n";
  cout<<"2) VPS Server      : 930ribu\n";
  cout<<"3) Cloud Server    :5 juta \n";
  cout<<"4) Domain Server    : 200rb\n";
  cout<<"Menu yang dipilih -> "; cin>>menu;
  cout<<"Negara asal pembeli(1. Indonesia 2. Lainnya) : ";cin>>negara;
  cout<<"Pembeliaan bulan keberapa? : ";cin>>bulan;
  };

void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data<<menu<<endl;
  tulis_data<<negara<<endl;
  tulis_data<<bulan;
  tulis_data.close();
}
private:
ofstream tulis_data;
int menu, negara, bulan;
};