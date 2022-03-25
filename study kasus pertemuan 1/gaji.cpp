#include<iostream>
using namespace std;

int main(){
	int bulan,tim1,tim2,tim;
	cout<<"pekerjaan selesai dalam berapa bulan?";
	cin>>bulan;
	tim1=22000000;
	tim2=28000000;
if(bulan<5)
	{
		cout<<"tim berapa?";
		cin>>tim;
		switch(tim){
			case 1 : {
					cout<<"gaji tim 1 sebesar Rp."<<(tim1*6/100)+tim1*bulan<<endl;
					cout<<"gaji tim 2 sebesar Rp."<<tim2*bulan<<endl;
					cout<<"tim 1 mendapatkan bonus sebesar 6% dari gaji utama ";
				break;
			}
			case 2 : {
				cout<<"gaji tim 1 sebesar RP. "<<tim1*bulan<<endl;
				cout<<"gaji tim 2 sebesar Rp."<<(tim2*6/100)+tim2*bulan<<endl;
				cout<<"tim 2 mendapatkan bonus sebesar 6% dari gaji utama ";
				break;
			} 
		
		}
	}
	
