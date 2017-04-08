#include <iostream>

using namespace std;


void menu();
void pilihanA();
void pilihanB();

char pilihan;
int x,min,maks,bil;

//program utama
int main() {
	menu();
	pilihanA();
	pilihanB();


 cout<<"====================================="<<endl;
 cout<<"============ TERIMAKASIH ============"<<endl;
 cout<<"====================================="<<endl;

return 0;

 }




void menu() {
    
 cout<<"-------------------------------------"<<endl;
 cout<<"a. Menentukan Nilai Minimum"<<endl;
 cout<<"b. Menentukan Nilai Maksimum"<<endl;
 cout<<"-------------------------------------"<<endl;
 cout<<"Masukan Pilihan Anda a/b : ";cin>>pilihan;
 cout<<"-------------------------------------"<<endl;
}




//Nilai Minimal
void pilihanA() 
{

 if(pilihan=='a')
    {

  cout<<"Masukan Banyak Input Bilangan = ";cin>>x;
  min=x;
   for(int i=1;i<=x;i++)
      {
         cout<<"\n Input Bilangan = ";cin>>bil;
         if(bil<min)
         {
          min=bil;
         }

       }
	cout<<"-------------------------------------"<<endl;	
        cout<<"Bilangan Minimalnya Adalah "<<min;
	cout<<endl;
        cout<<"-------------------------------------"<<endl;
                 
  }

}



 //Nilai Maksimal
void pilihanB() 
{

 if(pilihan=='b')
    {
  
  cout<<"Masukan Banyak Input Bilangan = ";cin>>x;
  maks=x;
   for(int i=1;i<=x;i++)
      {
         cout<<"\n Input Bilangan = ";cin>>bil;
         if(bil>maks)
         {
          maks=bil;
         }

      }
	cout<<"-------------------------------------"<<endl;
        cout<<"Bilangan Maksimalnya Adalah "<<maks;
	cout<<endl;
        cout<<"-------------------------------------"<<endl;
  
    }
}
      