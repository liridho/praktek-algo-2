#include <iostream>
using namespace std;

int main (){
	int ukuranX, i=0 ;
	int s;
	cout<<"masukan nilai= ";
	cin>>ukuranX;
	
	int X [ukuranX];
	for (int j = 0; j <ukuranX; j++) {
	cout <<"masukan data ke " <<j+1<<":";
	cin>> X[j];
	}

	cout<<"masukan data yang dicari:";
	cin>>s;
	while(i <ukuranX && X[i]!=s)
	i++;

	if(X[i] ==s)
	cout <<"Data ditemukan pada indeks ke " <<i<< endl;
	else
	cout<<"Data Tidak ditemukan" << endl;

	return 0;
}