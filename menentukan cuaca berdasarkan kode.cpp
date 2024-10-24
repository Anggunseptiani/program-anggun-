#include<iostream>
using namespace std;

int main(){
	int kode;
	cout <<"masukan kode cuaca (1-3):";
	cin >> kode;
	
	switch(kode){
		case 1:
			cout <<"cuaca cerah\n";
			break;
		case 2:
			cout <<" cuaca berawan\n";
			break;
		case 3:
			cout <<" cuaca hujan\n";
			break;
			default :
				cout <<"kode tidak valid\n:";
	}
	return 0;
}
