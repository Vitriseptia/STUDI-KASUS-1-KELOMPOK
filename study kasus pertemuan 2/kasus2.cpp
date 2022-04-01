#include<iostream>
using namespace std;

class developer{
	public : 
		void daftar();
		void proses();
		void pengalaman();
		void output();
	private : 
		int dftr,kerja,gaji,ga,lama,posisi;
		float pl,p2;
		string nama;
};

void developer::daftar(){
	cout<<"Masukan nama anda : "; getline(cin,nama);
	cout<<endl; 
	cout<<" 1. Express JS\n2. Django python\n3. Rails ruby\n4. Laravel PHP\n5. Spring Java\n6. Angular JS"<<endl;
	cout<<"Anda ingin mendaftar dibagian apa? "; cin>>dftr;
	
	cout<<"Berapa lama pengalaman anda di bidang tersebut?"; cin>>pl;
		if(pl>2){
			cout<<"Apakah anda ingin melamar 2 pekerjaan dengan ketentuan potongan perbulan 9%/pekerjaan "; cin>>p2;
			cout<<endl;
			if(p2='y'){
				cout<<" 1. Express JS\n2. Django python\n3. Rails ruby\n4. Laravel PHP\n5. Spring Java\n6. Angular JS"<<endl;
				cout<<"Anda ingin mendaftar dibagian apa? "; cin>>dftr;
				cout<<endl;
				cout<<"Berapa lama pengalaman anda di bidang tersebut?"; cin>>pl;
				cout<<endl;
			}
		}		
	cout<<"Berapa lama anda menyelesaikan pekerjaan : "; cin>>lama;
	cout<<"posisi 1)leader 2)anggota : "; cin>>posisi;
}

void developer::proses(){
	switch(dftr){
		case 1 : {
			cout<<"Express JS";
			gaji=15000000;
			break;
		}
		case 2 :{
			cout<<"Django pyton";
			gaji=13000000;
			break;
		}
		case 3 :{
			cout<<"Rails ruby";
			gaji=8000000;
			break;
		}
		case 4 :{
			cout<<"Laravel PHP";
			gaji=18000000;
			break;
		}
		case 5 :{
			cout<<"Spring Java";
			gaji=8000000;
			break;
		}
		case 6 :{
			cout<<"Angular JS";
			gaji=15000000;
			break;
		}
		
	}
	
}

void developer::pengalaman(){
	if(pl>4){
		ga=gaji*0.4+gaji;
	}
}

void developer::output(){
	cout<<"\n\nSlip Pembayaran Gaji Karyawan\n\n "<<endl;
	cout<<"==================================="<<endl;
	cout<<"Nama					: "<<nama<<endl;
		/*
	cout<<"Bidang pekerjaan		:"<<developer.proses();

	cout<<"Rincian gaji:"<<endl;
	cout<<"Gaji pokok 			: "<<gaji*lama;
	cout<<"Gaji tambahan 		: "<<gaji
	cout<<"Potongan gaji 		: "<<
	cout<<"Total gaji 			: "<<
	*/
}


int main(){
	developer x;
	x.daftar();
	x.proses();
	x.pengalaman();
	x.output();
	return 0;
	
}