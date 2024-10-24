#include<iostream>
using namespace std;

int main(){
	int kode;
	cout <<"masukan kode genre film(1-5)";
	cin >> kode;
	
	switch (kode){
		case 1: 
		cout <<"aksi\n";
		break;
		case 2:
		cout<<"drama\n";
		break;
		case 3:
			cout <<"komedi\n";
			break;
		case 4:
		     cout <<"horor\n";
			 break;
		case 5:
		   cout <<"sci-fi\n";
		   break;
		   default:
		   cout <<"kode tidak valid\n";		
	}
	 return 0;
}
