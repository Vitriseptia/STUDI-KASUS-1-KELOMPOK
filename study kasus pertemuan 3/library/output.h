using namespace std;
class Output{
public:
void cetak(){
  cout<<"-----------STRUK PEMBAYARAN-----------\n";
  cout<<"Layanan Cloud    : "<<data_file[0]<<endl;
  cout<<"Negara asal      : "<<data_file[5]<<endl;
  cout<<"Pembayaran bulan : "<<data_file[6]<<endl;
  cout<<"Harga Layanan    : "<<data_file[0]<<endl;
  cout<<"Diskon Negara    : "<<data_file[1]<<endl;
  cout<<"Diskon Ramadhan  : "<<data_file[2]<<endl;
  cout<<"Harga Total      : "<<data_file[3]<<endl;
  cout<<"--------------------------------------";
}
void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};
