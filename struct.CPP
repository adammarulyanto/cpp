#include <stdio.h>
#include <iostream.h>
#include <conio.h>

main()
{
	struct
   {
   	char nim[5];
      char nama[15];
      int nilai;
   } data;

clrscr();
cout<<"masukan NIM = ";
cin>>data.nim;
cout<<"masukan Nama = ";
cin>>data.nama;
cout<<"masukan Nilai Akhir = ";
cin>>data.nilai;
cout<<"\n\nData Yang di Inputkan adalah : \n\n";
cout<<"NIM = "<<data.nim<<endl;
cout<<"Nama = "<<data.nama<<endl;
cout<<"Nilai Akhir = "<<data.nilai<<endl;
getch();
}