#include<stdio.h>
#include<conio.h>
main ()
{
int panjang,lebar,kali;
printf ("seorang pekerja bangunan akan membuat kolam berbentuk persegi panjang dengan ukuran : ");
getch ();
printf("input nilai panjang : ");
scanf("%d",&panjang);
printf("input nilai lebar : ");
scanf("%d",&lebar);
kali=panjang*lebar;
printf("\nluas kolam = %d",kali);
getch();
return 0;
}
