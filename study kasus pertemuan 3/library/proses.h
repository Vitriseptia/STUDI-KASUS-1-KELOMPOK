using namespace std;
class Proses{
public:
void getData(){
      ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
        switch (menu) {
          case 1: {
            ambil_data >> hst_SH;
           break;
          }
          case 2: {
            ambil_data >> hst_VPS;
           break;
          }
          case 3: {
            ambil_data >> hst_CS;
           break;
          }
          case 4: {
            ambil_data >> hst_DN;
            break;
          }
          }
      
        if(negara==1) {
            ambil_data >> dn;
               
    }
    ambil_data.close();
  };
  void toFile(){
    int total = menu;
    float t2 = float(total);
     t2 = menu + db + dn;

    tulis_data.open("api_data.txt");
    tulis_data << menu << endl;
    tulis_data << db << endl;
    tulis_data << dn <<endl;
    tulis_data << t2;

    tulis_data.close();
  }

private:
  ifstream ambil_data;
  ofstream tulis_data;
  string data_file[30];
		int index = 0;
  int menu,negara;
  int hst_SH = 300000;
  int hst_VPS = 930000;
  int hst_CS = 5000000;
  int hst_DN = 280000;
  int total = menu;
  int db = (total * 10)/100;
  int dn = (total * 9)/100;
};