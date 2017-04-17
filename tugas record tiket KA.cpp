#include <iostream> 
 
using namespace std;

 //Nama		: LIRIDHO
 //Kelas 	: TIF RM - 16 C 
 //NIM		: 16.111.212 
 

 	typedef struct  
	{ 
		string noKA; 
 		string namaKA; 
 	} kereta; 
 	 
 	typedef struct  
 	{ 
 		string nama; 
 		string ktp; 
 	} penumpang; 
 	 
 	typedef struct  
 	{ 
 		string jam; 
 		string menit; 
 		string detik; 
		string zona; 
 	} jam; 
 	 
 	typedef struct  
 	{ 
 		string hari; 
 		string tgl; 
 		string bulan; 
 		string tahun; 
 	} tanggal; 
 	 
 	typedef struct  
 	{ 
 		string kotaAsalKA; 
 		string kotatujuanKA; 
 		jam waktuBerangkat; 
 		jam waktuTiba; 
 		tanggal tanggalBerangkat; 
 		tanggal tanggalTiba; 
 		string harga; 
 	} jadwalKA; 
 	 
 
 int main (){ 
 	penumpang Reni; 
 	kereta KA; 
 	jadwalKA tiket; 
 	 
 	KA.noKA = "BDO-Parahyangan-0103"; 
 	KA.namaKA = "Parahyangan"; 
 	 
 	cout<< "===============[ Data Penumpang ]==============="<<endl; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Masukan Nama 	 	: "; 
 	cin >> Reni.nama ; 
 	cout << "Masukan No KTP 		: "; 
 	cin >> Reni.ktp; 
 	cout << "Kota Tujuan			: "; 
 	cin >> tiket.kotatujuanKA; 
 	cout << "Kota Asal			: "; 
 	cin >> tiket.kotaAsalKA; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Hari Berangkat   	: "; 
 	cin>>tiket.tanggalBerangkat.hari; 
 	cout << "Tanggal Berangkat	: "; 
 	cin>>tiket.tanggalBerangkat.tgl; 
 	cout << "Bulan Berangkat  	: ";	 
 	cin>>tiket.tanggalBerangkat.bulan; 
 	cout << "Tahun Berangkat  	: "; 
 	cin>>tiket.tanggalBerangkat.tahun; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Hari Tiba  	  	: "; 
 	cin>>tiket.tanggalTiba.hari; 
 	cout << "Tanggal Tiba  	  	: "; 
 	cin>>tiket.tanggalTiba.tgl; 
 	cout << "Bulan Tiba  	  	: ";	 
 	cin>>tiket.tanggalTiba.bulan; 
 	cout << "Tahun Tiba       	: "; 
 	cin>>tiket.tanggalTiba.tahun; 
 	 
 	tiket.waktuBerangkat.jam = "10"; 
 	tiket.waktuBerangkat.menit = "15"; 
 	tiket.waktuBerangkat.detik = "17"; 
 	tiket.waktuBerangkat.zona = "WIB"; 
 	tiket.waktuTiba.jam = "01"; 
 	tiket.waktuTiba.menit = "17"; 
 	tiket.waktuTiba.detik = "33"; 
 	tiket.waktuBerangkat.zona = "WIB"; 
 	tiket.waktuTiba.zona = "WIB"; 
 	 
 	if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Bandung"){ 
 		tiket.harga = "Rp. 137.000"; 
 	 
 	} 
 	else if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Jakarta"){ 
 		tiket.harga = "Rp. 157.000";  
 	} 
 	else if (tiket.kotatujuanKA == "Jakarta" && tiket.kotaAsalKA == "Surabaya"){ 
 		tiket.harga = "Rp. 300.000";  
 	} 
 	else if (tiket.kotatujuanKA == "Pekalongan" && tiket.kotaAsalKA == "Cimahi"){ 
 		tiket.harga = "Rp. 450.000";  
 	} 
 	else { 
 			tiket.harga = "Rp. 0";  
 	} 
 	 
 	 
 	cout << endl;  
 	cout << "|================ TIKET PERJALANAN =============|" << endl; 
 	cout << "+-----------------------------------------------+" << endl; 
 	 
 	cout << "No Kereta Api 	 	: " << KA.noKA << endl; 
 	cout << "Nama Kereta Api 	: " << KA.namaKA  << endl; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Nama Penumpang  	: " << Reni.nama << endl; 
 	cout << "No KTP 		 	: " << Reni.ktp  << endl; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Kota Tujuan  	 	: " << tiket.kotatujuanKA << endl; 
 	cout << "Kota Asal		: " << tiket.kotaAsalKA << endl; 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Biaya 	 		: " << tiket.harga << endl;  
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Tanggal Keberangkatan	: " << tiket.tanggalBerangkat.hari <<", "<< tiket.tanggalBerangkat.tgl <<" "<<  tiket.tanggalBerangkat.bulan <<" "<<  tiket.tanggalBerangkat.tahun  << endl; 
        cout << "waktu			: " << tiket.waktuBerangkat.jam <<" : "<<  tiket.waktuBerangkat.menit <<" : "<<  tiket.waktuBerangkat.detik<<" " <<tiket.waktuBerangkat.zona << endl;	 
 	cout<<"+-----------------------------------------------+"<<endl; 
 	cout << "Tanggal Keberangkatan	: " << tiket.tanggalTiba.hari <<", "<< tiket.tanggalTiba.tgl <<" "<<  tiket.tanggalTiba.bulan <<" "<<  tiket.tanggalTiba.tahun  << endl; 
        cout << "waktu			: " << tiket.waktuTiba.jam <<" : "<<  tiket.waktuTiba.menit <<" : "<<  tiket.waktuTiba.detik <<" "<<tiket.waktuTiba.zona<< endl; 
 	cout<<"+-----------------------------------------------+"<<endl; 
	cout<<" DIRECTED BY : LIRIDHO ";
 	 return 0;  
 } 
