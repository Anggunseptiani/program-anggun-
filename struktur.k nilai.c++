#include<iostream>
using namespace std;

int main(){
	int nilai;
	cout <<"nilai ujian:";
	cin >> nilai;
	

	if (nilai >= 85 && nilai <=100)
	cout << "NILAI A";
	else if (nilai >= 70 && nilai <=85)
	cout <<"NILAI B";
	else if (nilai >= 55 && nilai <= 55)
	cout <<"NILAI C";
	else if (nilai >= 40 && nilai <= 40)
	cout << "NILAI D";
	else
	cout <<"invalid"; 
	
	
	
	return 0;
}
