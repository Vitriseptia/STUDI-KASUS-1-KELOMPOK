using namespace std;

class Proses {
public:
  void getData() {
    ambil_data.open("api_data.txt");
    while (!ambil_data.eof()) {
      ambil_data >> data_file[index];
      index += 1;
    }
    ambil_data.close();
  }

  void toFile() {
    int peng = 1000;
    int b = peng * bulan;
    tulis_data.open("api_data.txt");
    tulis_data << saku << endl;
    tulis_data << bulan << endl;
    tulis_data << a << endl;
    tulis_data << peng << endl;
    tulis_data << b << endl;
    tulis_data << a - b;
    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[30];
  int index = 0;
  int i, n, saku,a, bulan, total, sisa;
};