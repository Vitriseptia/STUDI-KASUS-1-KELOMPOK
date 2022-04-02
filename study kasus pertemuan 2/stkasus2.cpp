#include<iostream>
using namespace std;

class developer{
	public : 
		void daftar();
		void pokok();
		void kerjaan();
		void proses();
		void output();
	private : 
		int pekerjaan, dftr[2], lama[2],posisi[2];
		double leader[2], gaji[2],thn[2], kurangan[2], gbulan[2], total[2],pl, tambahan[2];
		string nama,p2, kr[10];
};

void developer::daftar(){

	cout<<"Masukan nama anda : "; getline(cin,nama);cout<<endl; 
	cout<<"Bidang pekerjaan"<<endl;
	cout<<"	1. Express JS"<<endl;
	cout<<"	2. Django python"<<endl;
	cout<<"	3. Rails ruby"<<endl;
	cout<<"	4. Laravel PHP"<<endl;
	cout<<"	5. Spring Java"<<endl;
	cout<<"	6. Angular JS"<<endl;
	cout<<"Nomer bidang yang akan diambil? : "; cin>>dftr[0];
	cout<<"Berapa lama pengalaman anda di bidang tersebut?(tahun) : "; cin>>thn[0];	
}