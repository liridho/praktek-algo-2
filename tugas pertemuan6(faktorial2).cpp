#include <iostream>

using namespace std;

int main()
{
int x,y=1,z;
     
cout<<" Masukan Angka : ";cin>>x;  
cout<<x<<" faktorial = ";
    
for(z=x;z>0;z--)
{if(z!=1)
cout<<z<<"*";
else
cout<<"1";
y=y*z;
}

cout<<"="<<y; 
cout<<endl;
cout<<"DIBUAT OLEH LIRIDHO TIF.RM.16C 16.111.212";
return 0;
}
