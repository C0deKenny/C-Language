#include <stdio.h>

//ini adalah program yang membantu untuk menghitung luas beberapa bangun datar

int main(){
	char nama[100];
	long long int pilihan = 0,p=0,l=0,s=0,a=0,t=0,persegi,persegip,segitiga,i,z;
	printf ("Masukkan namamu di sini: ");
	scanf ("%[^\n]s",&nama);
	printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("Halo %s! Selamat datang di program penghitung luas!\n", nama);
	printf ("Pilih (1) untuk luas persegi!\n");
	printf ("Pilih (2) untuk luas persegi panjang!\n");
	printf ("Pilih (3) untuk luas segitiga!\n");
	for (i=0;i<30;i++){
	printf ("Masukkan pilihanmu: ");
	scanf ("%lld",&pilihan);
	if (pilihan==1)	{
		printf ("Masukkan panjang sisi: ");
		scanf ("%lld",&s);
		persegi=s*s;
		printf ("Luas persegi adalah: %lld\n",persegi);
		persegi=0;
		printf ("kembali pilih?[ya(1)/tidak(2)]: ");
		scanf ("%d",&z);
		printf ("\n");
		if (z==1) {continue;
		z=0;
		}
		else {printf ("Terima kasih!\n");
		return 0;
		}
	}
	if (pilihan==2)	{
		printf ("Masukkan panjang: ");
		scanf ("%lld",&p);
		printf ("Masukkan lebar: ");
		scanf ("%lld",&l);
		persegip=p*l;
		printf ("Luas persegi panjang adalah: %lld\n",persegip);
		persegip=0;
		printf ("kembali pilih?[ya(1)/tidak(2)]: ");
		scanf ("%d",&z);
		printf ("\n");
		if (z==1) {
		continue;
		z=0;
		}
		else {printf ("Terima kasih!\n");
		return 0;}
	}
	if (pilihan==3)	{
		printf ("Masukkan panjang alas: ");
		scanf ("%lld",&a);
		printf ("Masukkan tinggi: ");
		scanf ("%lld",&t);
		segitiga= a*t/2;
		printf ("Luas segitiga adalah: %lld\n",segitiga);
		segitiga=0;
		printf ("kembali pilih?[ya(1)/tidak(2)]: ");
		scanf ("%d",&z);
		printf ("\n");
		if (z==1){
		continue;
		z=0;}
		else {printf ("Terima kasih!\n");
		return 0;}
	}
	}
	return 0;
}
