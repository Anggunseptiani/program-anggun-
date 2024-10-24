#include<iostream>
using namespace std;

int main(){
	float ipk;
	cout <<"masukan ipk:";
	cin >> ipk;
	
	switch (int(ipk)){
		case 4 :
			cout <<"lulus dengan pujian\n";
			break;
		case 3:
			cout <<"lulus\n";
			break;
		case 2:
			cout <<"hampir lulus\n";
			break;
		case 1:
			cout <<"tidak lulus\n";
			break;
			default:
				cout <<"ipk tiddak valid\n:";
	}
	 return 0;
}
