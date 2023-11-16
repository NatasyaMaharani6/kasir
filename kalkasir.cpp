#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int bukmaj, buktul, buklat, bukwar,bukas;
 float Book, Disc, FixBook, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| Buku Majalah	: Rp 16.000,00 	|"<<endl;
 cout<<"\t\t| Buku Tulis	: Rp 5.000,00 	|"<<endl;
 cout<<"\t\t| Buku Latin	: Rp 5.000,00 	|"<<endl;
 cout<<"\t\t| Buku Mewarnai	: Rp 13.000,00 	|"<<endl;
 cout<<"\t\t| Buku Kas	: Rp 17.000,00 	|"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Buku Majalah yang dibeli	: "; cin>>bukmaj;
 cout<<"Masukkan jumlah Buku Tulis yang dibeli		: "; cin>>buktul;
 cout<<"Masukkan jumlah Buku Latin yang dibeli		: "; cin>>buklat;
 cout<<"Masukkan jumlah Buku Mewarnai yang dibeli	: "; cin>>bukwar;
 cout<<"Masukkan jumlah Buku Kas yang dibeli		: "; cin>>bukas;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<bukmaj<<"\t\tBuku Majalah \t	16000 \t\t"<<bukmaj*16000<<"\t|"<<endl;
 cout<<"\t|   "<<buktul<<"\t\tBuku Tulis \t\t5000 \t\t"<<buktul*5000<<" \t|"<<endl;
 cout<<"\t|   "<<buklat<<"\t\tBuku Latin \t\t5000  \t\t"<<buklat*5000<<" \t|"<<endl;
 cout<<"\t|   "<<bukwar<<"\t\tBuku Mewarnai \t	13000 \t\t"<<bukwar*13000<<"\t|"<<endl;
 cout<<"\t|   "<<bukas<<"\t\tBuku Kas \t	17000 \t\t"<<bukas*17000<<" \t|"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = bukmaj*16000 + buktul*5000 + buklat*5000 + bukwar*13000 + bukas*17000 ;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"     \t|"<<endl;
 Disc = 10.0/100*Book;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"         \t|"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t|"<<endl;
 FixBook = Book-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook<<"\t|"<<endl;
 cout<<"\t====================================================================="<<endl;
}
