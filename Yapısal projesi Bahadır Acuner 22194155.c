#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Hocam çalýþmazsa sýkýntý oluþursa çaðýrýrsanýz sevinirim bende çalýþýyor fakat sizde sýkýntý çýkartýrmý bilemiyorum*/

int satis_doldur(int a[], int b[], int c[]){
srand(time(NULL));
int s,i,d[12]={1,2,3,4,5,6,7,8,9,10,11,12};
/*menunun ust kismini yazan kisim*/
printf("\n\nRasgele olarak belirlenen satis miktarlari:\n\n");
printf("isletme adi");
for (i=0;i<12;i++){printf("\t%d", d[i]);}
printf("\n-------------------------------------------------------------------------------------------------------------\n");
/*Main deki random atanan sayilari ekrana yazan fonksiyon*/
    printf("XXX             ");
    for (i=0;i<12;i++) {printf("%ld\t",a[i]);}
	printf("\n");
	printf("YYY             ");
	for (i=0;i<12;i++) {printf("%ld\t",b[i]);}
	printf("\n");
	printf("ZZZ             ");
	for (i=0;i<12;i++) {printf("%ld\t",c[i]);}
	/*yeniden secenek sunuldugu kisim*/
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("\nYapmak istediginiz islemi seciniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("Program Sonlandiriliyor...");
    else
    son();
}

int en_cok_satis_ay(int a[],int b[], int c[]){
	int s,i,s1,s2,s3,ix1,ix2,ix3,bl1=0,bl2=0,bl3=0;
	printf("\nIsletmelerin en cok satis yaptigi aylar:  \n");
	/*En cok hangi ayda nekadar satis yapmistir onu bulan fonksiyon*/
    for (i=0;i<12;i++) {
        a[i];
        if(i==0){s1=a[i];}
        if(a[i]>s1){s1=a[i];}
        if(a[i]==s1){bl1=1;ix1=i;}
	}
	if(bl1==1);
	for (i=0;i<12;i++) {
        b[i];
        if(i==0){s2=b[i];}
        if(b[i]>s2){s2=b[i];}
        if(b[i]==s2){bl2=1;ix2=i;}
	}
	if(bl2==1);
	for (i=0;i<12;i++) {
        c[i];
        if(i==0){s3=c[i];}
        if(c[i]>s3){s3=c[i];}
        if(c[i]==s3){bl3=1;ix3=i;}
		}
	if(bl3==1);
	/*EKrana ciktilari yazdigi kisim*/
	printf("\nXXX isletmesi en cok %d ayda %d satis yapmistir. \n",ix1+1, s1);
    printf("YYY isletmesi en cok %d ayda %d satis yapmistir. \n",ix2+1, s2);
    printf("ZZZ isletmesi en cok %d ayda %d satis yapmistir. \n",ix3+1, s3);
    /*yeniden secenek sunuldugu kisim*/
    printf("-----------------------------------------------------------------------------------\n");
    printf("\nYapmak istediginiz islemi seciniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("Program Sonlandiriliyor...");
    else
    son(a,b,c);
}

int en_cok_satis(int a[],int b[],int c[]){
	int i,x=0,y=0,z=0,eb,s;
	/*yeniden sayilari yazip toplami hesaplayan fonksiyon*/
	for (i=0;i<12;i++) {a[i];x=x+a[i];}
	for (i=0;i<12;i++) {b[x];y=y+b[i];}
	for (i=0;i<12;i++) {c[i];z=z+c[i];}
	/*en cok satisin bulundugu fonksiyon*/
	eb=x;
    if(y>eb){eb=z;}
    if(z>eb){eb=y;}
    /*eb ye gore hangi sirketse ona gore yazdigi kisim*/
    if(eb==x){printf("\nYillik en fazla satis yapan isletme XXX, yillik toplam %d TL satis yapmistir.",eb);}
    else if(eb==y){printf("\nYillik en fazla satis yapan isletme YYY, yillik toplam %d TL satis yapmistir.",eb);}
    else if(eb==z){printf("\nYillik en fazla satis yapan isletme ZZZ, yillik toplam %d TL satis yapmistir.",eb);}
    /*yeniden secenek sunuldugu kisim*/
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("\nYapmak istediginiz islemi seciniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("Program Sonlandiriliyor...");
    else
    son(a,b,c);
}

int aylik_toplam_satis(int a[],int b[],int c[]){
	int w,toplam,s;
	/*istenilen ayin girildigi kisim*/
	printf("\nislem yapmak istediginiz ayi seciniz: ");
    scanf("%d",&w);
    /*istenilen ayin sirketlere tek tek bulunup toplandigi kisim*/
    toplam =a[w-1]+b[w-1]+c[w-1];
    printf("isletmeler %d. ayda toplam %d satis yapmistir", w,toplam);
    /*yeniden secenek sunuldugu kisim*/
    printf("\n-----------------------------------------------------------------------------------\n");
    printf("\nYapmak istediginiz islemi seciniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("Program Sonlandiriliyor...");
    else
    son(a,b,c);
}

void son(int a[],int b[],int c[]){
	/*5 den fazla sayi girilirse hata mesaji verip yeni sayi girmeni istedi kisim*/  
	int s;
	printf("\nHATAA! Menude belirtilen rakamlar dan tuslayiniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("\nProgram Sonlandiriliyor...");
    else
    son(a,b,c);
}

int main(){
	int s,i,a[12],b[12],c[12];
	srand(time(NULL));
	/* Sayilarin random atandigi kisim*/
    for (i=0;i<12;i++) {a[i]=10000+rand()%300000;}
	for (i=0;i<12;i++) {b[i]=10000+rand()%300000;}
	for (i=0;i<12;i++) {c[i]=10000+rand()%300000;}
	/*Menuyu olusturdugu kisim*/
    printf("                   **MENU**\n");
    printf("1-isletmelerin yillik satislarini goruntuleme\n");
    printf("2-isletmelerin en cok satis yaptigi aylari ve satis miktarlarini goruntuleme\n");
    printf("3-yillik en fazla satis yapan isletmeyi goruntuleme\n");
    printf("4-ay bilgisine gore toplam satis miktari goruntuleme\n");
    printf("5-cikis\n\n");
    /*secenek sunulan kisim*/
    printf("Yapmak istediginiz islemi seciniz: ");
    scanf("%d",&s);
    if(s==1)
    satis_doldur(a,b,c);
    else if(s==2)
    en_cok_satis_ay(a,b,c);
    else if(s==3)
    en_cok_satis(a,b,c);
    else if(s==4)
    aylik_toplam_satis(a,b,c);
    else if(s==5)
    printf("Program Sonlandiriliyor...");
    else
    son(a,b,c);
}
