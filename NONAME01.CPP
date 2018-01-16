#include<iostream.h>
#include<conio.h>

main()
{
  int luas,s,p,l,pilihan;
  cout<<"Program Luas Persegi dan Persegi Panjang\n";
  cout<<"[1] Pesegi\n";
  cout<<"[2] Persegi Panjang\n";
  cout<<"Masukkan Pilihan Anda = ";
  cin>>pilihan;
  switch(pilihan)
  {
    case 1 :cout<<"\n\nMenghitung luas persegi\n";
            cout<<"Masukkan sisi = ";
            cin>>s;
            cout<<"Rumus = S x S\n";
            luas=s*s;
            cout<<"Luas Persegi = "<<luas;
            break;
    case 2 :cout<<"\n\nMenghitung luas persegi panjang\n";
            cout<<"Masukkan panjang = ";
            cin>>p;
            cout<<"Masukkan lebar = ";
            cin>>l;
            cout<<"Rumus = P x l\n";
            luas=p*l;
            cout<<"Luas Persegi Panjang = "<<luas;
            break;
    default : cout<<"inputan salah";break;
  }
  getch();
}
