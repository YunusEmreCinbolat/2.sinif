#include<stdio.h>
int main(){
	int basamak_sayi1,basamak_sayi2;
	printf("Buyuk sayi kac basamaklidir ");
	scanf("%d",&basamak_sayi1);
	char sayi1[basamak_sayi1];
	printf("Kucuk sayi kac basamaklidir ");
	scanf("%d",&basamak_sayi2);
	int i;
	char sayi2[basamak_sayi2];
	printf("Buyuk sayiyi giriniz:");
	scanf("%s",&sayi1);
	for(i=0;i<basamak_sayi1;i++){
		if(sayi1[i]=='1' || sayi1[i]=='2' ||sayi1[i]=='3' ||sayi1[i]=='4' ||sayi1[i]=='5' ||sayi1[i]=='6' ||sayi1[i]=='7' ||sayi1[i]=='8' ||sayi1[i]=='9' || sayi1[i]=='0'){}
		else{
			printf("Sayi degildir");
			return 0;
		}
	}	
    printf("Kucuk sayiyi giriniz:");
	scanf("%s",sayi2);
	for(i=0;i<basamak_sayi2;i++){
		if(sayi2[i]=='1' || sayi2[i]=='2' ||sayi2[i]=='3' ||sayi2[i]=='4' ||sayi2[i]=='5' ||sayi2[i]=='6' ||sayi2[i]=='7' ||sayi2[i]=='8' ||sayi2[i]=='9' || sayi2[i]=='0'){}
		else{
			printf("Sayi degildir");
		    return 0;
		}
	}
				
	int integersayi1[basamak_sayi1];
	for(i=0;i<sayi1[i]!='\0';i++){ 
		integersayi1[i]=sayi1[i];
	}
    int son_index1=basamak_sayi1-1;	
	int integersayi2[basamak_sayi2];
    int j;
	for(j=0;integersayi1[j]!='\0';j++){
	    integersayi2[j]=sayi2[j];
	}
   	
	   int son_index2=basamak_sayi2-1;
	for(i=0;i<sayi1[i]!='\0';i++){
		integersayi1[i]=(int)(sayi1[i]-48);
    }
    printf("\n\n");
	for(i=0;integersayi2[i]!='\0';i++){
	    integersayi2[i]=(int)(sayi2[i]-48);;	   
	}
	int islem;
    printf("1->TOPLAMA\n2->CIKARMA\n3->CARPMA\nislem seciniz: ");
    scanf("%d",&islem);
    printf("  ");
    for(i=0;sayi1[i]!='\0';i++){
		printf("%c ",sayi1[i]);
	}
	printf("\n");
	for(i=0;i<basamak_sayi1-basamak_sayi2;i++){
		printf("  ");
	}
	printf("  ");
	 for(i=0;sayi2[i]!='\0';i++){
		printf("%c ",sayi2[i]);
	}	
	printf("\n");
    if(islem==1) {
		//TOPLAMA
		int elde=0;
		int toplama_suresi=basamak_sayi1;
	    int kontrol=basamak_sayi1;
		int toplam[basamak_sayi1];
		while(toplama_suresi>=0){
			if(son_index2>=0){
			toplam[toplama_suresi]= (integersayi1[son_index1--]+integersayi2[son_index2--]+elde);
	   			if(toplam[toplama_suresi]>10){
				toplam[toplama_suresi]=(toplam[toplama_suresi]%10);
				toplam[toplama_suresi]=(char)(toplam[toplama_suresi]+48);
				elde=1;
				}
				else if(toplam[toplama_suresi]==10){
				toplam[toplama_suresi]=(char)(48);
					elde=1;
				}
				else{
				elde=0;
				toplam[toplama_suresi]=(char)(toplam[toplama_suresi]+48);
    			}
		}
		else{
			toplam[toplama_suresi]=integersayi1[son_index1--]+elde;
			if(toplam[toplama_suresi]>=10){
				toplam[toplama_suresi]=(toplam[toplama_suresi]%10);
		     	toplam[toplama_suresi]=(char)(toplam[toplama_suresi]+48);
				elde=1;
				}
				else{
					elde=0;
					toplam[toplama_suresi]=(char)(toplam[toplama_suresi]+48);
			  	}
	       }
		   toplama_suresi--;
	   }
		int k;
		for(k=toplama_suresi+1;k<=basamak_sayi1;k++){
			printf("%c ",toplam[k]);
	    }
	//TOPLAMA SONU
	}
	else if(islem==2){
	//CÝKARMA
	   son_index1=basamak_sayi1-1;
	   son_index2=basamak_sayi2-1;
	   int cikarma_suresi=basamak_sayi1;
	   int cikarma[cikarma_suresi];
	   while(cikarma_suresi>=0){
	   	 	cikarma[cikarma_suresi]=integersayi1[son_index1]-integersayi2[son_index2];
		   if(son_index2>=0){
		       if(cikarma[cikarma_suresi]<0){
			   cikarma[cikarma_suresi]=(integersayi1[son_index1]+10)-integersayi2[son_index2];
			    integersayi1[son_index1-1]-=1;
			    }
		   }
		   else{
			  	if(integersayi1[son_index1]<0){
			   	cikarma[cikarma_suresi]=9;
			   	integersayi1[son_index1-1]-=1;
			   }
			  else{
			  	cikarma[cikarma_suresi]=integersayi1[son_index1];
			   }
		    }
	       son_index1--;
	       son_index2--;
	       cikarma_suresi--;  
    	}
		cikarma[cikarma_suresi+1]=0;
		 for(i=cikarma_suresi+1;i<=basamak_sayi1;i++){
		 	printf("%d ",cikarma[i]);
		 }
	 //CÝKARMA SONU
   }
	else if(islem==3){
        int elde=0;
	    int carpma[200][2000];
	    for(i = 0;i <= basamak_sayi1;i++){
	        for(j = basamak_sayi2;j >=0;j--){
		            carpma[i][j] = (integersayi2[i]*integersayi1[j])+elde;
	            	elde=carpma[i][j]/10;
		            if(carpma[i][j]>=10){
		            	carpma[i][j]=carpma[i][j]%10;
					}
		        }
		        elde=0;
		    }
		elde=0;
		int carpmasonucu[basamak_sayi1+basamak_sayi2];
		int terim=0;
		for(i=0;i<=basamak_sayi1+1;i++){
			for(j=basamak_sayi2;j>basamak_sayi2-terim;j--){
				carpmasonucu[terim]=carpma[i][j]+elde;
				if(carpmasonucu[terim]>=10){
					carpmasonucu[terim]=carpma[i][j]%10;
					elde=carpma[i][j]/10;
				}
				else{
					elde=0;
				}
			}
			elde=0;
			terim++;
		}
		printf("\n");
		for(i=0;i<basamak_sayi1+basamak_sayi2;i++){
			printf("%d",carpmasonucu[i]);
	    }
   }
    else{
		printf("tanimlanmayan islem");
	}
}

