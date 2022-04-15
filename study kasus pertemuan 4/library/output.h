using namespace std;
class Output{
public:
void cetak(){
  cout<<"\n";
  cout<<"----HASIL PENGELUARAN----"<<endl;
  cout<<"Pengeluaran tiap bulan : "<<data_file[3]<<endl;
  cout<<"Total pengeluaran      : "<<data_file[4]<<endl;
  cout<<"Sisa uang tabungan     : "<<data_file[5]<<endl;
}
	void getData(){
			ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}
private:
	ifstream ambil_data;
  string data_file[30];
	int index = 0;
int pengeluaran,total,sisa;

};