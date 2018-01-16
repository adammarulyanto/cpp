#include <stdio.h>
#include <iostream.h>
#include <conio.h>

main()
{

int n1,n2,n3,r1,r2,r3;

cout<<"Input Nilai 1 : ";cin>>n1;
cout<<"Input Nilai 2 : ";cin>>n2;
cout<<"Input Nilai 3 : ";cin>>n3;

r1=n1+n2*n3;
r2=n1+(n2*n3);
r3=(n1+n2)*n3;

clrscr();
cout<<"-------------------- \n";
cout<<"Hasilnya... 	 \n";
cout<<"-------------------- \n";
cout<<"\n Hasilnya r1 :"<<r1;
cout<<"\n Hasilnya r2 :"<<r2;
cout<<"\n Hasilnya r3 :"<<r3;
getch();
}
