#include<iostream>
using namespace std;

int main(){
	char operasi;
	int a, b;
	cout <<"masukan operator (+, -, *, /):";
	cin >>operasi;
	cout<<"masukan dua angka:";
	cin >> a >> b;
	
	switch(operasi){
		case '+':
			cout <<"hasil:" << a + b << endl;
			break;
		case '-':
			cout <<"hasil:" << a - b << endl;
			break;n
		case '*':
			cout <<"hasil:" << a * b << endl;
			break;
		case '/':
			cout <<"hasil :" << a / b << endl;
			break;
			default :
				cout <<"operator tidak valid\n:";
	}
	return 0;
}
