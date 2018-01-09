#include <stdio.h>
#include <iostream.h>
#include <conio.h>
#include <iomanip>

main()
{
	int i,data;
   int hhasil;
	struct
   {
   	char nim[10];
      char nama[15];
   	char ket;
      float hasil,uts,uas;

   } mhs[5];

clrscr();
cout<<"                    LATIHAN C++"<<endl;
cout<<"        Program Perhitungan Nilai Mahasiswa"<<endl;
cout<<"========================================================"<<endl<<endl;
cout<<"Berapa banyak data? = ";
cin>>data;

for(i=1;i<=data;i++){
cout<<"Data Ke = "<<i<<endl;
cout<<"masukan NIM = ";
cin>>mhs[i].nim;
cout<<"masukan Nama = ";
cin>>mhs[i].nama;
cout<<"masukan UTS = ";
cin>>mhs[i].uts;
cout<<"masukan UAS = ";
cin>>mhs[i].uas;
}
clrscr();
cout<<"                    LATIHAN C++"<<endl;
cout<<"        Program Perhitungan Nilai Mahasiswa"<<endl;
cout<<"========================================================"<<endl<<endl;
cout<<"No"<<setw(10)<<"NIM"<<setw(10)<<"Nama"<<setw(15)<<"Nilai Akhir"<<setw(10)<<"ket"<<endl<<endl;
for(i=1;i<=data;i++){
hhasil = mhs[i].uts*40/100+mhs[i].uas*60/100;
if(hhasil>70)
mhs[i].ket='L';
else
mhs[i].ket='G';
cout<<i<<setw(10)<<mhs[i].nim<<setw(10)<<mhs[i].nama<<setw(15)<<hhasil<<setw(10)<<mhs[i].ket<<endl<<endl;
}
cout<<endl;
getch();
}
