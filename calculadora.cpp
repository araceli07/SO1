#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a=0, b=0, c=0,x=0;
	
cout<<"1 sumar"<<endl;
cout<<"2 restar"<<endl;
cout<<"3 multiplicar"<<endl;
cout<<"4 dividir"<<endl;


cout<<"daem un numero"<<endl;
cin>>a;
cout<<"dame otro numero"<<endl;
cin>>b;
cout<<"elije una opcion"<<endl;
cin>>c;

if (c==1){
	x=a+b;
	cout<<"el resultado es:"<<endl<<x;
	system("pause");
}
if (c==2){
	x=a-b;
	cout<<"el resultado es:"<<endl<<x;
	system("pause");
	
	
}
if (c==3){
	x=a*b;
	cout<<"el resultado es:"<<endl<<x;
	system("pause");
	
	
}
if (c==4){
	x=a/b;
	cout<<"el resultado es:"<<endl<<x;
	system("pause");
	
	
}
getch();
system("pause");
return 0;





}
