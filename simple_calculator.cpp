/* Program Kalkulator */

#include <stdio.h>
#include <conio.h>
#include <cstdlib>

main()
{
	int bil1, bil2, bil3, menu, hasil; 
	char kar;

	printf("Menu Kalkulator \n");
	printf("1. Penjumlahan \n");
	printf("2. Pengurangan \n");
	printf("3. Perkalian \n");
	printf("4. Pembagian \n");
	printf("5. Keluar \n");
		
	printf("\n");
	printf("Pilih Menu Kalkulator : ");
	scanf("%d",&menu);
	
	if (menu == 1)
	{
		printf("\n");
		printf("Masukkan bilangan pertama : ");
		scanf("%d", &bil1);
		printf("Masukkan bilangan kedua : ");
		scanf("%d", &bil2);
		hasil = bil1 + bil2;
		printf("%d + %d = %d \n", bil1, bil2, hasil);
	}
	else if (menu == 2) 
	{
		printf("\n");
		printf("Masukkan bilangan pertama : ");
		scanf("%d", &bil1);
		printf("Masukkan bilangan kedua : ");
		scanf("%d", &bil2);
		hasil = bil1 - bil2;
		printf("%d - %d = %d \n", bil1, bil2, hasil);
	}
	else if (menu == 3)	
	{
		printf("\n");
		printf("Masukkan bilangan pertama : ");
		scanf("%d", &bil1);
		printf("Masukkan bilangan kedua : ");
		scanf("%d", &bil2);
		hasil = bil1 * bil2;
		printf("%d * %d = %d \n", bil1, bil2, hasil);
	}
	else if (menu == 4)	
	{
		printf("\n");
		printf("Masukkan bilangan pertama : ");
		scanf("%d", &bil1);
		printf("Masukkan bilangan kedua : ");
		scanf("%d", &bil2);
		hasil = bil1 / bil2;
		printf("%d / %d = %d \n", bil1, bil2, hasil);
	}
	else
	{
		printf("salah");
	}	
}
