#include<iostream>
using namespace std;

int main(){
    int kode;
	cout <<"masukan kode hewan(1-5):";
	cin >> kode;
	
	switch (kode){
		case 1:
			cout <<"kucing\n";
			break;
		case 2:
			cout <<"anjing\n";
			break;
		case 3:
			cout <<"burung\n";
			break;
		case 4:
			cout <<"ikan\n";
			break;
		case 5:
			cout <<"kelinci\n";
			break;
			default:
				cout <<"kode tidak valid\n";
	}
	 return 0;
}
