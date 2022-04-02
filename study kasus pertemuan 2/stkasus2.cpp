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

void developer::kerjaan(){
	if(thn[0]>=2.5){
		cout<<"Apakah anda ingin melamar 2 pekerjaan?(y/n) : "; cin>>p2;}
		if(p2=="y"){
			cout<<"Bidang kedua yang akan diambil? : "; cin>>dftr[1];
			cout<<endl;
			cout<<"Berapa lama pengalaman anda di bidang tersebut? : "; cin>>thn[1];
				if(thn[1]<2.5){
				dftr[1]=0;
				cout<<"Anda hanya dapat mendaftar satu perkerjaan,yaitu "<<dftr<<endl;
				}
			}


	cout<<"Berapa lama anda menyelesaikan pekerjaan  bidang 1 (bulan) : "; cin>>lama[0];
	cout<<"posisi\n 1)leader\n 2)anggota\n : "; cin>>posisi[0];
	if(thn[1]>=2.5){
		pekerjaan=2;
		cout<<"Berapa lama anda menyelesaikan pekerjaan bidang 2? ";cin>>lama[1];
	cout<<"posisibidang 2: \n 1)leader\n 2)anggota : "; cin>>posisi[1];
	}
}

void developer::pokok(){
	for(int i=0; i<2;i++){
	switch(dftr[i]){
			case 1 : {
				kr[i]="Express JS";
				gaji[i]=15000000;
				break;
			}
			case 2 :{
				kr[i]="Django pyton";
				gaji[i]=13000000;
				break;
			}
			case 3 :{
				kr[i]="Rails ruby";
				gaji[i]=8000000;
				break;
			}
			case 4 :{
				kr[i]="Laravel PHP";
				gaji[i]=18000000;
				break;
			}
			case 5 :{
				kr[i]="Spring Java";
				gaji[i]=8000000;
				break;
			}
			case 6 :{
				kr[i]="Angular JS";
				gaji[i]=15000000;
				break;
			}
		}
}
}

