
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Bagli{
	int eleman;
	int sonraki;
} Bagli;
int main()
{
	Bagli dizi[1000];
	int adet;
	int sayigir;
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&adet);
	int i, j, k, sayi[adet+1];
    srand(time(NULL));
    for (i=0; i<adet+1; i++)
    {
        sayi[i]=rand()%(adet+1);
        for (j=0; j<i; j++)
            if (sayi[i]==sayi[j])
                i--;
    }
    k=0;
    dizi[sayi[k]].eleman=5;
    dizi[sayi[k]].sonraki=0;
    
    while(k<adet){
    	k++;
    	printf("%d. sayiyi giriniz: ",k);
    
    	scanf("%d",&sayigir);
    
    	dizi[sayi[k]].eleman=sayigir;
    	dizi[sayi[k]].sonraki=k;
    	
	}
	dizi[sayi[k]].sonraki=-1;
	k=0;
	printf("Bas-> ");
	while(dizi[sayi[k]].sonraki!=-1){
		if(k==0){
			k++;
		}
		else{
		printf("%d -> ",dizi[sayi[k]].eleman);
    	k++;
		}
    	
	}
		printf("%d -> Son",dizi[sayi[k]].eleman);
    return 0;
    
}
