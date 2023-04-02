#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
struct bagli{
	int eleman;
	int sonraki;
	
};


int main(){
	struct bagli dizi[100];//100 elemanli bir dizi olusturdum
	int i;
	int j;
	int a;
	int sayac=0;//bunları olusturmamın amacı 
	int e=0;// bunları olusturmamın amacı  her sayı eklendıgınde 1 artsınlar ve sonrakı sayıya gıtsınler poınter baglı lıste mantıgı
	int b=0;
	int r;
	int p;
	int c;
	int uzun=0;
	int used[100] = {0};//uretılen sayının bır daha uretılmesını engellemek ıcın yapılmıs bır dızı
srand(time(NULL));
  for( i=0;i<100;i++){
  	dizi[i].sonraki=-1; //once tum degerlere -1 verıyorumkı deger geldıgınde -1 olmayanları yazdırsın
  }
printf("ilk random sayi uretiliyor\n");
 while(b!=-1){
  	do {
r = rand() % 100 ; // 1 ile 6 arasında rastgele sayı üret
} while (used[r]); // üretilen sayı daha önce kullanılmışsa tekrar üret
used[r] = 1; // üretilen sayıyı kullanıldı olarak işaretliyoruz
  	       printf("sayi gir\n");
  	       scanf("%d",&a);
  	       if(sayac==0){
			 dizi[r].eleman=a;
dizi[r].sonraki=-1;
p=r;//dızının basını tutuyorum ekleme yapmak ıcın
c=r;//dizinin basını tutuyorum yazdırmak ıcın
sayac++;

			 }
			 else{
			 	dizi[p].sonraki=r;
			 	dizi[r].eleman=a;
			 	
			 	p=r;
			 
			 }



printf("random sayi uretmeye devam etmek istemiyorsaniz -1'i tuslayiniz istiyorsaniz -1 haricindeki bir sayiyi tuslayiniz\n");
scanf("%d",&b);

}

  

  printf("\n\n                      -------------------\tbagli liste\t--------------------\n\n\t");


while(dizi[c].sonraki!=-1){//yazdırma ıslemı
	printf(" %d -> ",dizi[c].eleman);
	c=dizi[c].sonraki;
}
	 	printf("%d",dizi[c].eleman); 
	  

  	
  	
  
	

	
}
