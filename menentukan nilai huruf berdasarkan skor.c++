#include<iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"masukan nilai (0-100):";
	cin >> nilai;
	
	switch (nilai / 10){
		case 10:
			case 9:
				cout <<"nilai : A\n";
				break;
		case 8:
			cout <<"nilai: B\n";
			break;
		case 7:
			cout <<"nilai: C\n";
			break;
		case 6:
			cout <<"nilai :D\n";
			break;
		default:
			cout <<"nilai: E\n";
	}
	return 0;
}
