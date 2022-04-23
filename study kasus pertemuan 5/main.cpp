#include"base.h"

int main(){
  int jumsks;
  BaseProject base;
  base.input();
  cout<<"SKS pada paket : ";cin>>jumsks;
  base.hargaa(jumsks);
  base.proses(); 
  base.output();
}