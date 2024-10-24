#include<iostream>
using namespace std;

int main(){
	int kode;
	cout <<"masukan kode kendaraan (1-4):";
	cin  >> kode;
	
	switch (kode){
		case 1:
			cout <<"motor\n";
			break;
		case 2:
			cout <<"mobil\n";
			break;
		case 3:
			cout <<"sepeda\n";
			break;
		case 4:
			cout <<"bus\n";
			break;
			default:
				cout <<"kode tidak valid\n";
	}
	return 0;
}
