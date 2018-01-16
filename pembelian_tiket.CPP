#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int jt,ht,jb,byr,kmb;
char nama[15],nk;
cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nMasukan Nama pembeli : ";cin>>nama;
clrscr();

cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nNama Pembeli : "<<nama;
cout<<"\nBerikut adalah daftar nama kereta : \n";
cout<<"\n======================================== \n";
cout<<"======= Daftar Nama Kereta Api ========= \n";
cout<<"======================================== \n";
cout<<" 1.ARGO LAWU		      Rp 200.000";
cout<<"\n 2.ARGO BROMO		      Rp 180.000";
cout<<"\n 3.PARAHYANGAN		      Rp 150.000";
cout<<"\n 4.TAKSANA		      Rp 135.000";
cout<<"\n======================================== \n";
cout<<"\nMasukan No. Kereta : ";cin>>nk;


switch(nk)
{


case '1':
clrscr();
cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nNama Pembeli 		: "<<nama;
cout<<"\nNama Kereta 		: ARGO LAWU";
cout<<"\nHarga per Tiket 	: Rp 200000 \n";
ht=200000;
cout<<"\n======================================== \n";
cout<<"\nJumlah Tiket 		: ";cin>>jt;
jb=jt*ht;
cout<<"Jumlah Bayar		: Rp "<<jb;
cout<<"\nBayar			: Rp ";cin>>byr;
cout<<"\n======================================== \n";
kmb=byr-jb;
cout<<"\nKembali			: Rp "<<kmb;
break;


case '2':
clrscr();
cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nNama Pembeli 		: "<<nama;
cout<<"\nNama Kereta 		: ARGO BROMO";
cout<<"\nHarga per Tiket 	: Rp 180000 \n";
ht=180000;
cout<<"\n======================================== \n";
cout<<"\nJumlah Tiket 		: ";cin>>jt;
jb=jt*ht;
cout<<"Jumlah Bayar		: Rp "<<jb;
cout<<"\nBayar			: Rp ";cin>>byr;
cout<<"\n======================================== \n";
kmb=byr-jb;
cout<<"\nKembali			: Rp "<<kmb;
break;


case '3':
clrscr();
cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nNama Pembeli 		: "<<nama;
cout<<"\nNama Kereta 		: PARAHYANGAN";
cout<<"\nHarga per Tiket 	: Rp 150000 \n";
ht=150000;
cout<<"\n======================================== \n";
cout<<"\nJumlah Tiket 		: ";cin>>jt;
jb=jt*ht;
cout<<"Jumlah Bayar		: Rp "<<jb;
cout<<"\nBayar			: Rp ";cin>>byr;
cout<<"\n======================================== \n";
kmb=byr-jb;
cout<<"\nKembali			: Rp "<<kmb;
break;


case '4':
clrscr();
cout<<"\n======================================== \n";
cout<<"===== Pembelian Tiket Kereta Api ======= \n";
cout<<"======================================== \n";
cout<<"\nNama Pembeli 		: "<<nama;
cout<<"\nNama Kereta 		: TAKSANA";
cout<<"\nHarga per Tiket 	: Rp 135000 \n";
ht=135000;
cout<<"\n======================================== \n";
cout<<"\nJumlah Tiket 		: ";cin>>jt;
jb=jt*ht;
cout<<"Jumlah Bayar		: Rp "<<jb;
cout<<"\nBayar			: Rp ";cin>>byr;
cout<<"\n======================================== \n";
kmb=byr-jb;
cout<<"\nKembali			: Rp "<<kmb;
break;


default:
cout<<"Kode Salah";
break;
}


getch();

}