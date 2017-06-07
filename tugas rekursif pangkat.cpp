
 #include <iostream>
 #include <cstdlib>

 /* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
 int pangkat(int a, int N ){
 if (N==0){
  return (1);
 }
 else{
  return (a*pangkat (a, N-1));
 }
 }
 int main(int argc, char *argv[]) {
 int b, x, hasil_pangkat;
 cout<<"Masukkan bilangan yang akan dipangkatkan : ";
 cin>>b;
 cout<<"\nMasukkan jumlah pangkat : ";
 cin>>x;
 system("cls");
 cout<<"=============================================\n";
 cout<<"|        PROGRAM PANGKAT (REKURSIF)         |\n";
 cout<<"|                Liridho                    |\n";
 cout<<"|              16.111.212                   |\n";
 cout<<"|              6 juni 2017                 |\n";
 cout<<"=============================================\n\n"; 
 hasil_pangkat = pangkat(b, x);
 cout<<"b = "<<b<<endl;
 cout<<"x = "<<x<<endl<<endl;
 cout<<"b^x = "<<b<<"^"<<x<<endl;
 cout<<"    = "<<hasil_pangkat;
 return 0;
 }
