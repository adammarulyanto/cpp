#include <stdio.h>
#include <iostream.h>
#include <conio.h>

main(){
atas:
clrscr();
char kd_kamar,nama[15],lagi;
int lm_menginap;
long h_sewa=0;
long ub=0;
long uk=0;
long tb_sewa=0;
cout<<"================== Aplikasi Sewa Kamar ====================";
cout<<"\n\nMasukan Nama :";cin>>nama;
cout<<"\nMasukan Kode Kamar :";cin>>kd_kamar;
switch(kd_kamar){
case 'A' :
case 'a' :
clrscr();
	h_sewa=300000;
	cout<<"\nNama Penyewa: "<<nama;
   cout<<"\nKode Kamar: "<<kd_kamar;
   cout<<"\nLama Menginap[hari]: ";cin>>lm_menginap;
   cout<<"\n***************************************";
   cout<<"\nTipe Kamar: Anggrek";
   cout<<"\nLama Menginap:"<<lm_menginap<<" Hari";
   if(lm_menginap>=7){
   cout<<"\nSouvenir: Payung Cantik";
   }else{
   }
   cout<<"\nBiaya Sewa: "<<h_sewa;
   cout<<"\nBiaya Administrasi: 200000";
   tb_sewa=h_sewa*lm_menginap+200000;
   cout<<"\nTotal Biaya Sewa: "<<tb_sewa;
   cout<<"\n***************************************";
   cout<<"\nUang Bayar: ";cin>>ub;
   uk=ub-tb_sewa;
   cout<<"\nUang Kembali: "<<uk;
   cout<<"\n\nMau Input Lagi? [Y/T] :";cin>>lagi;
   if(lagi=='Y' || lagi=='y'){
   	goto atas;
   }
break;
case 'B':
case 'b':
clrscr();
	h_sewa=250000;
	cout<<"\nNama Penyewa: "<<nama;
   cout<<"\nKode Kamar: "<<kd_kamar;
   cout<<"\nLama Menginap[hari]: ";cin>>lm_menginap;
   cout<<"\n***************************************";
   cout<<"\nTipe Kamar: Bougenville";
   cout<<"\nLama Menginap:"<<lm_menginap<<" Hari";
   if(lm_menginap>=7){
   cout<<"\nSouvenir: Payung Cantik";
   }else{
   }
   cout<<"\nBiaya Sewa: "<<h_sewa;
   cout<<"\nBiaya Administrasi: 200000";
   tb_sewa=h_sewa+200000;
   cout<<"\nTotal Biaya Sewa: "<<tb_sewa;
   cout<<"\n***************************************";
   cout<<"\nUang Bayar: ";cin>>ub;
   uk=ub-tb_sewa;
   cout<<"\nUang Kembali: "<<uk;
break;
case 'M':
case 'm':
clrscr();
	h_sewa=200000;
	cout<<"\nNama Penyewa: "<<nama;
   cout<<"\nKode Kamar: "<<kd_kamar;
   cout<<"\nLama Menginap[hari]: ";cin>>lm_menginap;
   cout<<"\n***************************************";
   cout<<"\nTipe Kamar: Mawar";
   cout<<"\nLama Menginap:"<<lm_menginap<<" Hari";
   if(lm_menginap>=7){
   cout<<"\nSouvenir: Payung Cantik";
   }else{
   }
   cout<<"\nBiaya Sewa: "<<h_sewa;
   cout<<"\nBiaya Administrasi: 200000";
   tb_sewa=h_sewa+200000;
   cout<<"\nTotal Biaya Sewa: "<<tb_sewa;
   cout<<"\n***************************************";
   cout<<"\nUang Bayar: ";cin>>ub;
   uk=ub-tb_sewa;
   cout<<"\nUang Kembali: "<<uk;
break;
default :
	cout<<"Kode Kamar Salah";
break;
}
   getch();
}
