#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,ee=0,ff=0,gg=0,hh=0,eee=0,fff=0,ggg=0,hhh=0,e1=0,f1=0,g1=0,h1=0,op=0,op2=0,an=0,an2=0,an11=0,an222=0,op11=0,op22=0;
	char dizi[1000];
	int z=0,k=0;
	int jj=0;
	int top=0;
	int de=0;
	int aaf=0,bbu=0;
	int emi=0;
	int day=0;
	int lb=0;
	int fem=0;
	int ey=0;
	int fy=0;
	int me=0;
	int bbuy=0;
	int aaff=0;
	int gu=0;
	int hu=0;
	int ede=0;
	int fed=0;
	int ged=0;
	int er=0,err=0;
	int hed=0;
	int env=0,fen=0;
	int guy=0;
	int huy=0;
	int bbe=0;
	int aal=0;
	int bey=0;
	int ayu=0;
	int aerr=0;
			char dosyaa[1000];
  printf("Dosya ismini giriniz:");
  	scanf("%s",&dosyaa);
  	FILE *dos;
  	dos=fopen(dosyaa,"r");//Dosyayý açma
  	int boyut = 0;
  	int sayac=0;
  	int be=0,ak=0;
  	char dizi2[1000];
  	int i;
	char karakter;//diziye eleman atamak için deðiþken
if(dos!=NULL){

  	while (!feof(dos)){	
  		karakter=fgetc(dos);	  	  
		  	dizi[boyut]=karakter;	
		boyut++;
	  
  	
	}
}
else{
	printf("dosya bulunamadi");
}
	printf("\n");

	

				
	fclose(dos);
	printf("kaynak kodunuz\n\n");

	for( i=0;i<boyut;i++){
		printf("%c",dizi[i]);
	}
	
	
for(i=0;i<boyut;i++){
		if(dizi[i]!=10){		
		  if(dizi[i]!=44){
		  	if(dizi[i]!=32){
			 if(dizi[i]!=58){
	  		dizi2[sayac]=dizi[i];	
		  	
		sayac++;
	}
	
		  }
		  
		  }
		  
		  	
	  }
	
	
	
}
	
	printf("\n");
	printf("\nkelimelestirilmis hali:\n");
	
		for( i=0;i<sayac-1;i++){
		printf("%c",dizi2[i]);
	}

	

printf("\n\t\n4.odev kodu:\n");

int AX=0,BX=0,CX=0,DX=0;

int buy=0,aer=0;
 a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,ee=0,ff=0,gg=0,hh=0,eee=0,fff=0,ggg=0,hhh=0,e1=0,f1=0,g1=0,h1=0,op=0,op2=0,an=0,an2=0,an11=0,an222=0,op11=0,op22=0;
int j;
	 z=0,k=0;
	 emi=0;
	 fem=0;
	 ey=0;
	 fy=0;
	 gu=0;
	 hu=0;
	 ede=0;
	 fed=0;
	 ged=0;
	 er=0,err=0;
	 hed=0;
	 env=0,fen=0;
	 guy=0;
	 huy=0;
	
	 int buyy=0;
	int aa=0,bb=0;
	int sem=0;

	int RAM[500];
	 int der[0];
	for( i=0;i<sayac-1;){
		 if(dizi2[i]=='A'){
			i=i+3;
			
			if(dizi2[i]=='A'){
				i=i+2;
				
				if(dizi2[i]=='B'){
					AX=BX;
					printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					AX=CX;
					printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
					else if(dizi2[i]=='A'){
					AX=AX;
					printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				
					else if(dizi2[i]=='D'){
					AX=AX;
					printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // ATM ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=RAM[top];
							printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						AX=RAM[top];
							printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=RAM[top];
							printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);;
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=top;
							printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					AX=top;
						printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=top;
								printf("ATAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//AX KISMI
			
			
			
			
					else if(dizi2[i]=='B'){
				i=i+2;
				if(dizi2[i]=='A'){
					BX=AX;
					printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					BX=CX;
					printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					BX=DX;
						printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
						else if(dizi2[i]=='B'){
					BX=BX;
						printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top Bx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=RAM[top];
								printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);;
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=RAM[top];
							printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);;
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=RAM[top];
							printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);;
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top Bx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=top;
							printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=top;
							printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=top;
							printf("ATAMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//BX KISMI
			
			
			
			
				else if(dizi2[i]=='C'){ //C X KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					CX=AX;
					printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					CX=BX;
				printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					CX=DX;
				printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
						else if(dizi2[i]=='C'){
					CX=CX;
					printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // ATM cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=RAM[top];
							printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=RAM[top];
					printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=RAM[top];
						printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=top;
						printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=top;
						printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=top;
							printf("ATAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//CX KISMI
			
			
			
			
				else if(dizi2[i]=='D'){ //DX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					DX=AX;
					printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					DX=BX;
					printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
					else if(dizi2[i]=='C'){
					DX=CX;
					printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
						else if(dizi2[i]=='D'){
					DX=DX;
					printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=RAM[top];
								printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						DX=RAM[top];
							printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=RAM[top];
							printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=top;
						printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					DX=top;
							printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=top;
							printf("ATAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//DX KISMI
			
			
			
			
			
			
			
			
			
			
			
			else if(dizi2[i]==91){ // ATM [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]=RAM[day1];
		
					printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				RAM[yr]=RAM[day1];
				printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]=RAM[day1];
			printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]=day1;
					printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]=day1;
				printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]=day1;
			printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]==AX;
						printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]==BX;
						printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]==CX;
						printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
					RAM[yr]==DX;
						printf("ATAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// ATM  [] SABÝT KISMI
			
		}//ATM kýsmý
		
		
}
	
	
	
		
		
		
		
		
		
		else if(dizi2[i]=='T'){//TOP
			i=i+3;
			if(dizi2[i]=='A'){
				i=i+2;
				if(dizi2[i]=='B'){
					AX=AX+BX;
					printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					AX=AX+CX;
					printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
					else if(dizi2[i]=='A'){
					AX=AX+AX;
					printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				
					else if(dizi2[i]=='D'){
					AX=AX+DX;
					printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top ax []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=AX+RAM[top];
							printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						AX=AX+RAM[top];
							printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX+RAM[top];
							printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=AX+top;
						printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					AX=AX+top;
						printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX+top;
							printf("TOPLAMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//AX KISMI
			
			
			
			
					else if(dizi2[i]=='B'){
				i=i+2;
				if(dizi2[i]=='A'){
					BX=BX+AX;
					printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					BX=BX+CX;
					printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					BX=BX+DX;
					printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
						else if(dizi2[i]=='B'){
					BX=BX+BX;
					printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top Bx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=BX+RAM[top];
							printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=BX+RAM[top];
							printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX+RAM[top];
							printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top Bx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=BX+top;
						printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=BX+top;
						printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX+top;
							printf("TOPLAMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//BX KISMI
			
			
			
			
				else if(dizi2[i]=='C'){ //C X KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					CX=CX+AX;
					printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					CX=CX+BX;
					printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					CX=CX+DX;
					printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
						else if(dizi2[i]=='C'){
					CX=CX+CX;
					printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=CX+RAM[top];
							printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=CX+RAM[top];
							printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX+RAM[top];
							printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=CX+top;
						printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=CX+top;
						printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX+top;
							printf("TOPLAMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//CX KISMI
			
			
			
			
				else if(dizi2[i]=='D'){ //DX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					DX=DX+AX;
					printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					DX=DX+BX;
					printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
					else if(dizi2[i]=='C'){
					DX=DX+CX;
					printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
						else if(dizi2[i]=='D'){
					DX=DX+DX;
					printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=DX+RAM[top];
							printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						DX=DX+RAM[top];
							printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX+RAM[top];
							printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=DX+top;
						printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					DX=DX+top;
						printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX+top;
							printf("TOPLAMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//DX KISMI
			
			
			
			
				else if(dizi2[i]==91){ // TOP [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]+=RAM[day1];
		
					printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				RAM[yr]+=RAM[day1];
				printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]+=RAM[day1];
			printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]+=day1;
					printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]+=day1;
				printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]+=day1;
			printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]+=AX;
						printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]+=BX;
						printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]+=CX;
						printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
					RAM[yr]+=DX;
						printf("TOPLAMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			

			
		}//TOP kýsmý
		
			
			
			
			
			
			


			
		}//toP kýsmý
		
		
		
		
			else if(dizi2[i]=='C'&&dizi2[i+1]=='I'){ // cýk kýsmý
			i=i+3;
			if(dizi2[i]=='A'){
				i=i+2;
				if(dizi2[i]=='B'){
					AX=AX-BX;
					printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					AX=AX-CX;
					printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					AX=AX-DX;
						printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
						else if(dizi2[i]=='A'){
					AX=AX-AX;
						printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // cýk ax []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=AX-RAM[top];
								printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);;
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						AX=AX-RAM[top];
								printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX-RAM[top];
						printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // cýk ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=AX-top;
						printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					AX=AX-top;
							printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX-top;
							printf("CIKARMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//AX KISMI
			
			
			
			
					else if(dizi2[i]=='B'){
				i=i+2;
				if(dizi2[i]=='A'){
					BX=BX-AX;
					printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					BX=BX-CX;
					printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					BX=BX-DX;
					printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);;
					i=i+2;
				}
				
						else if(dizi2[i]=='B'){
					BX=BX-BX;
					printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);;
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top Bx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=BX-RAM[top];
								printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=BX-RAM[top];
						printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX-RAM[top];
							printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top Bx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=BX-top;
						printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=BX-top;
						printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX-top;
							printf("CIKARMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//BX KISMI
			
			
			
			
				else if(dizi2[i]=='C'){ //C X KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					CX=CX-AX;
					printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					CX=CX-BX;
						printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					CX=CX-DX;
					printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
						else if(dizi2[i]=='C'){
					CX=CX-CX;
					printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=CX-RAM[top];
							printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=CX-RAM[top];
							printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX-RAM[top];
								printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=CX-top;
				printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=CX-top;
						printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);;	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX-top;
							printf("CIKARMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//CX KISMI
			
			
			
			
				else if(dizi2[i]=='D'){ //DX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					DX=DX-AX;
					printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					DX=DX-BX;
						printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
					else if(dizi2[i]=='C'){
					DX=DX-CX;
					printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
							else if(dizi2[i]=='D'){
					DX=DX-DX;
					printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=DX-RAM[top];
							printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						DX=DX-RAM[top];
							printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX-RAM[top];
							printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=DX-top;
						printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					DX=DX-top;
							printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX-top;
								printf("CIKARMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//DX KISMI
			
			
			
			
				else if(dizi2[i]==91){ // ATM [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]-=RAM[day1];
		
					printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				RAM[yr]-=RAM[day1];
				printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]-=RAM[day1];
			printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]-=day1;
					printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]-=day1;
				printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]-=day1;
			printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]-=AX;
						printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]-=BX;
						printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]-=CX;
						printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
					RAM[yr]-=DX;
						printf("CIKARMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// CIK  [] SABÝT KISMI
			
		}//CIK  kýsmý RAMLER FALAN
		
			
			
			
			
			
		
			
			

			
		}//CIK kýsmý BITIMI
		
		
		
		
		
			else if(dizi2[i]=='C'&&dizi2[i+1]=='R'){ // crp kýsmý
			i=i+3;
			if(dizi2[i]=='A'){
				i=i+2;
				if(dizi2[i]=='B'){
					AX=AX*BX;
					printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					AX=AX*CX;
					printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					AX=AX*DX;
							printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
						else if(dizi2[i]=='A'){
					AX=AX*AX;
							printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // cýk ax []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=AX*RAM[top];
									printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						AX=AX*RAM[top];
								printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX*RAM[top];
							printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // crp ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=AX*top;
						printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					AX=AX*top;
							printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX*top;
							printf("CARPMA SONUCU AXIN  DEGERI:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//AX KISMI
			
			
			
			
					else if(dizi2[i]=='B'){
				i=i+2;
				if(dizi2[i]=='A'){
					BX=BX*AX;
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					BX=BX*CX;
				printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					BX=BX*DX;
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
					else if(dizi2[i]=='B'){
					BX=BX*BX;
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // crp Bx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=BX*RAM[top];
								printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=BX*RAM[top];
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX*RAM[top];
						printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top Bx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=BX*top;
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=BX*top;
					printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX*top;
						printf("CARPMA SONUCU BXIN  DEGERI:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//BX KISMI
			
			
			
			
				else if(dizi2[i]=='C'){ //CX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					CX=CX*AX;
					printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					CX=CX*BX;
						printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					CX=CX*DX;
						printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
						else if(dizi2[i]=='C'){
					CX=CX*CX;
						printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // crp cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=CX*RAM[top];
							printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=CX*RAM[top];
							printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX*RAM[top];
								printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // crp cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=CX*top;
				printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=CX*top;
							printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX*top;
							printf("CARPMA SONUCU CXIN  DEGERI:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//CX KISMI
			
			
			
			
				else if(dizi2[i]=='D'){ //DX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					DX=DX*AX;
						printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					DX=DX*BX;
						printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
					else if(dizi2[i]=='C'){
					DX=DX*CX;
						printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
						else if(dizi2[i]=='D'){
					DX=DX*DX;
						printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=DX*RAM[top];
							printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						DX=DX*RAM[top];
								printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX*RAM[top];
							printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // crp cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=DX*top;
						printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					DX=DX*top;
							printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX*top;
									printf("CARPMA SONUCU DXIN  DEGERI:%d\n",DX);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//DX KISMI
			
			
			
			
				else if(dizi2[i]==91){ // CRP [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]=RAM[day1];
		
					printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				RAM[yr]*=RAM[day1];
				printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]*=RAM[day1];
			printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]*=day1;
					printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]*=day1;
				printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					RAM[yr]*=day1;
			printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]*=AX;
						printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]*=BX;
						printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]*=CX;
						printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
					RAM[yr]*=DX;
						printf("CARPMA SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// CRP  [] SABÝT KISMI
			
		}//CRP kýsmý
		
			
			
			
			
			
			
			
			
// CRPNIN  [] SABÝT KISMI
			
		}//CRP kýsmý
		
		
		
		
			else if(dizi2[i]=='B'&&dizi2[i+1]=='O'){ // BOL kýsmý
			i=i+3;
			int k=0;
			if(dizi2[i]=='A'){
				i=i+2;
				if(dizi2[i]=='B'){
					k=AX%BX;
					AX=AX/BX;
					printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
				k=AX%CX;
					AX=AX/CX;
							printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
					k=AX%DX;	
					AX=AX/DX;
					
								printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
					i=i+2;
				}
				
						else if(dizi2[i]=='A'){
							k=AX%AX;
					AX=AX/AX;
							printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // cýk ax []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						k=AX%RAM[top];
						AX=AX/RAM[top];
									printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
							k=AX%RAM[top];
						AX=AX/RAM[top];
								printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								k=AX%RAM[top];
								AX=AX/RAM[top];
							printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // cýk ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					k=AX%top;
					AX=AX/top;
							printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					k=AX%top;
					AX=AX/top;
									printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
							k=AX%top;
								AX=AX/top;
								printf("BOLME SONUCU AXIN  DEGERI:%d ve kalan:%d\n",AX,k);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//AX KISMI
			
			
			
			
					else if(dizi2[i]=='B'){
				i=i+2;
				if(dizi2[i]=='A'){
					k=BX%AX;
					BX=BX/AX;
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
					i=i+2;
				}
			else if(dizi2[i]=='C'){
					k=BX%CX;
					BX=BX/CX;
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
							k=BX%DX;
					BX=BX/DX;
					printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
					i=i+2;
				}
				
						else if(dizi2[i]=='B'){
								k=BX%BX;
					BX=BX/BX;
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top Bx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
							k=BX%RAM[top];
						BX=BX/RAM[top];
								printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
							k=BX%RAM[top];
						BX=BX/RAM[top];
							printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								k=BX%RAM[top];
								BX=BX/RAM[top];
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top Bx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
						k=BX%top;
					BX=BX/top;
							printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
						k=BX%top;
					BX=BX/top;
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								k=BX%top;
								BX=BX/top;
						printf("BOLME SONUCU BXIN  DEGERI:%d ve kalan:%d\n",BX,k);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//BX KISMI
			
			
			
			
				else if(dizi2[i]=='C'){ //C X KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					k=CX%AX;
					CX=CX/AX;
					printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
				k=CX%BX;
					CX=CX/BX;
							printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
					i=i+2;
				}
				
					else if(dizi2[i]=='D'){
						k=CX%DX;
					CX=CX/DX;
						printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
					i=i+2;
				}
						else if(dizi2[i]=='C'){
							k=CX%CX;
					CX=CX/CX;
						printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						k=CX%RAM[top];
						CX=CX/RAM[top];
						printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						k=CX%RAM[top];
						CX=CX/RAM[top];
							printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
							k=CX%RAM[top];
								CX=CX/RAM[top];
									printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					k=CX%top;
					CX=CX/top;
				printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					k=CX%top;
					CX=CX/top;
					printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
							k=CX%top;
								CX=CX/top;
									printf("BOLME SONUCU CXIN  DEGERI:%d ve kalan:%d\n",CX,k);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//CX KISMI
			
			
			
			
				else if(dizi2[i]=='D'){ //DX KISMI
				i=i+2;
				if(dizi2[i]=='A'){
					k=DX%AX;
					DX=DX/AX;
					printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
					i=i+2;
				}
			else if(dizi2[i]=='B'){
					k=DX%BX;
					DX=DX/BX;
						printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
					i=i+2;
				}
				
					else if(dizi2[i]=='C'){
							k=DX%CX;
					DX=DX/CX;
			printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
					i=i+2;
				}
				
						else if(dizi2[i]=='D'){
								k=DX%DX;
					DX=DX/DX;
			printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
					i=i+2;
				}
				
				else if(dizi2[i]==91){ // top cx []
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
							k=DX%RAM[top];
						DX=DX/RAM[top];
							printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
								k=DX%RAM[top];
						DX=DX/RAM[top];
							printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==94){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								k=DX%RAM[top];
								DX=DX/RAM[top];
						printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
							i=i+5;
						}
						
					}
					

				}
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // top cx sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
						k=DX%top;
					DX=DX/top;
				printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					k=DX%top;
					DX=DX/top;
						printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
							k=DX%top;
								DX=DX/top;
							printf("BOLME SONUCU DXIN  DEGERI:%d ve kalan:%d\n",DX,k);
							i=i+3;
						}
					}
					
					
				}
				
						
			}//DX KISMI
			
			
			
			else if(dizi2[i]==91){ // BOL [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				k=RAM[yr]%RAM[day1];
				RAM[yr]/=RAM[day1];
		
					printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						k=RAM[yr]%RAM[day1];
				RAM[yr]/=RAM[day1];
					printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
							k=RAM[yr]%RAM[day1];
					RAM[yr]/=RAM[day1];
			printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
			k=RAM[yr]%day1;
				RAM[yr]/=day1;
					printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
			k=RAM[yr]%day1;
				RAM[yr]/=day1;
				printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
							k=RAM[yr]%day1;
					RAM[yr]/=day1;
				printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
						k=RAM[yr]%AX;
					RAM[yr]/=AX;
							printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					k=RAM[yr]%BX;
					RAM[yr]/=BX;
						printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					k=RAM[yr]%CX;
					RAM[yr]/=CX;
						printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
					k=RAM[yr]%DX;
					RAM[yr]/=DX;
					printf("BOLME SONUCU RAM[%d]:degeri:%d ve kalanin degeri:%d\n",yr,	RAM[yr],k);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// CRP  [] SABÝT KISMI
			
		}//CRP kýsmý
		
			
			
			
			
			
			

			
			
// bolUN  [] SABÝT KISMI
			
		}//BOL kýsmý
		
		
		else if(dizi2[i]=='V'&&dizi2[i+2]!='Y'){
			i=i+2;
			if(dizi2[i]=='A'){//ax ýcýn
				i=i+2;
				if(dizi2[i]=='B'){
					AX=AX&BX;
					printf("VE :%d\n",AX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
					AX=AX&AX;
					printf("VE:%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]=='C'){
					AX=AX&CX;
					printf("VE:%d\n",AX);
					i=i+2;
				}
				else if(dizi2[i]=='D'){
					AX=AX&DX;
					printf("VE:%d\n",AX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=AX&RAM[top];
							printf("VE:%d\n",AX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						AX=AX&RAM[top];
							printf("VE:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX&RAM[top];
							printf("VE:%d\n",AX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=AX&top;
								printf("VE:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					AX=AX&top;
						printf("VE:%d\n",AX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX&top;
								printf("VE:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			else	if(dizi2[i]=='B'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='A'){
					BX=BX&BX;
					printf("VE :%d\n",BX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
							BX=BX&AX;
					printf("VE :%d\n",BX);
					i=i+2;
				}
				
				else if(dizi2[i]=='C'){
							BX=BX&CX;
					printf("VE :%d\n",BX);;
					i=i+2;
				}
				else if(dizi2[i]=='D'){
						BX=BX&DX;
					printf("VE :%d\n",BX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=BX&RAM[top];
							printf("VE:%d\n",BX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=BX&RAM[top];
							printf("VE:%d\n",BX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX&RAM[top];
							printf("VE:%d\n",BX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=BX&top;
								printf("VE:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=BX&top;
								printf("VE:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									BX=BX&top;
								printf("VE:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
				else if(dizi2[i]=='C'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='C'){
					CX=CX&CX;
					printf("VE :%d\n",CX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
								CX=CX&AX;
					printf("VE :%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]=='B'){
							CX=CX&BX;
					printf("VE :%d\n",CX);;
					i=i+2;
				}
				else if(dizi2[i]=='D'){
						CX=CX&DX;
					printf("VE :%d\n",CX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=CX&RAM[top];
							printf("VE:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=CX&RAM[top];
							printf("VE:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								CX=CX&RAM[top];
							printf("VE:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=CX&top;
								printf("VE:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=CX&top;
								printf("VE:%d\n",CX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									CX=CX&top;
								printf("VE:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			
				else if(dizi2[i]=='D'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='D'){
					DX=DX&DX;
					printf("VE :%d\n",DX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
								DX=DX&AX;
					printf("VE :%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]=='B'){
							DX=DX&BX;
					printf("VE :%d\n",DX);
					i=i+2;
				}
				else if(dizi2[i]=='C'){
						DX=DX&CX;
					printf("VE :%d\n",DX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=DX&RAM[top];
							printf("VE:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
							DX=DX&RAM[top];
							printf("VE:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX&RAM[top];
							printf("VE:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=DX&top;
								printf("VE:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					DX=DX&top;
								printf("VE:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									DX=DX&top;
								printf("VE:%d\n",DX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			
			else if(dizi2[i]==91){ // ATM [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]=RAM[yr]&RAM[day1];
		
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					
				RAM[yr]=RAM[yr]&RAM[day1];
		
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);;
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					
				RAM[yr]=RAM[yr]&RAM[day1];
		
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]=RAM[yr]&day1;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]=RAM[yr]&day1;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
						RAM[yr]=RAM[yr]&day1;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]=RAM[yr]&AX;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]=RAM[yr]&BX;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]=RAM[yr]&CX;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
						RAM[yr]=RAM[yr]&DX;
					printf("VE OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// VE [] SABÝT KISMI
			
		}//VE kýsmý
		
		
		
			

			
		}
		
		
		
		
		else if(dizi2[i]=='V'&&dizi2[i+2]=='Y'){
			i=i+3;
			if(dizi2[i]=='A'){//ax ýcýn
				i=i+2;
				if(dizi2[i]=='B'){
					AX=AX|BX;
					printf("VEYA :%d\n",AX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
				AX=AX|AX;
					printf("VEYA :%d\n",AX);
					i=i+2;
				}
				
				else if(dizi2[i]=='C'){
					AX=AX|CX;
					printf("VEYA :%d\n",AX);
					i=i+2;
				}
				else if(dizi2[i]=='D'){
				AX=AX|DX;
					printf("VEYA :%d\n",AX);;
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						AX=AX|RAM[top];
							printf("VEYA:%d\n",AX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
							AX=AX|RAM[top];
							printf("VEYA:%d\n",AX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									AX=AX|RAM[top];
							printf("VEYA:%d\n",AX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					AX=AX|top;
								printf("VEYA:%d\n",AX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				AX=AX|top;
								printf("VEYA:%d\n",AX);;	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								AX=AX|top;
								printf("VEYA:%d\n",AX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			else	if(dizi2[i]=='B'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='A'){
					BX=BX|BX;
					printf("VEYA :%d\n",BX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
						BX=BX|AX;
					printf("VEYA :%d\n",BX);
					i=i+2;
				}
				
				else if(dizi2[i]=='C'){
						BX=BX|CX;
					printf("VEYA :%d\n",BX);
					i=i+2;
				}
				else if(dizi2[i]=='D'){
					BX=BX|DX;
					printf("VEYA :%d\n",BX);;
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						BX=BX|RAM[top];
							printf("VEYA:%d\n",BX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						BX=BX|RAM[top];
							printf("VEYA:%d\n",BX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								BX=BX|RAM[top];
							printf("VEYA:%d\n",BX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					BX=BX|top;
								printf("VEYA:%d\n",BX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					BX=BX|top;
								printf("VEYA:%d\n",BX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									BX=BX|top;
								printf("VEYA:%d\n",BX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
				else if(dizi2[i]=='C'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='C'){
					CX=CX|CX;
					printf("VEYA :%d\n",CX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
								CX=CX|AX;
					printf("VEYA :%d\n",CX);
					i=i+2;
				}
				
				else if(dizi2[i]=='B'){
								CX=CX|BX;
					printf("VEYA :%d\n",CX);
					i=i+2;
				}
				else if(dizi2[i]=='D'){
						CX=CX|DX;
					printf("VEYA :%d\n",CX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						CX=CX|RAM[top];
							printf("VEYA:%d\n",CX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						CX=CX|RAM[top];
							printf("VEYA:%d\n",CX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
							CX=CX|RAM[top];
							printf("VEYA:%d\n",CX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					CX=CX|top;
								printf("VEYA:%d\n",CX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
					CX=CX|top;
								printf("VEYA:%d\n",CX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
										CX=CX|top;
								printf("VEYA:%d\n",CX);
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			
				else if(dizi2[i]=='D'){//bx ýcýn
				i=i+2;
				if(dizi2[i]=='D'){
					DX=DX|DX;
					printf("VEYA :%d\n",DX);
					i=i+2;
				}
				else if(dizi2[i]=='A'){
								DX=DX|AX;
					printf("VEYA :%d\n",DX);
					i=i+2;
				}
				
				else if(dizi2[i]=='B'){
						DX=DX|BX;
					printf("VEYA :%d\n",DX);
					i=i+2;
				}
				else if(dizi2[i]=='C'){
					DX=DX|CX;
					printf("VEYA :%d\n",DX);
					i=i+2;
				}
				
			
				else if(dizi2[i]==91){ // VE ax []
				
					if(dizi2[i]==91&&dizi2[i+2]==93){
						top=(dizi2[i+1]-48);
						DX=DX|RAM[top];
							printf("VEYA:%d\n",DX);
							i=i+3;
					}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
						top=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
							DX=DX|RAM[top];
							printf("VEYA:%d\n",DX);
							i=i+4;
					}
					else if(dizi2[i]==91&&dizi2[i+4]==93){
						top=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
								DX=DX|RAM[top];
							printf("VEYA:%d\n",DX);
							i=i+5;
						}
						
					}
					

				}
				
				
				else if(dizi2[i]>=48&&dizi2[i]<58){ // ATM ax sabit
					
					if(dizi2[i+1]<48||dizi2[i+1]>57){
					top=dizi2[i]-48;
					DX=DX|top;
								printf("VEYA:%d\n",DX);
						i=i+1;	
					}
					else if(dizi2[i+2]<48||dizi2[i+2]>57){
					top=(dizi2[i]-48)*10+(dizi2[i+1]-48);
						DX=DX|top;
								printf("VEYA:%d\n",DX);	
						i=i+2;
					}
					
						else if(dizi2[i+3]<48||dizi2[i+3]>57){
					top=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
						if(top>256){
							printf("lütfen 1den 256ya kadar bir deger giriniz");
							break;
						}
						else{
									DX=DX|top;
								printf("VEYA:%d\n",DX);;
							i=i+3;
						}
					}
					
					
				}
				
				
			}
			
			
			
			else if(dizi2[i]==91){ // ATM [] sabit veya ax falan veya []
			
			int yr=0;
		
			int  day1=0;
				if(dizi2[i]==91&&dizi2[i+2]==93){
					yr=dizi2[i+1]-48;
					i=i+3;
				
				}
				else if(dizi2[i]==91&&dizi2[i+3]==93){
					yr=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
				
					i=i+4;
					
				}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					yr=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					i=i+5;
					
				
				}
				
				if(dizi2[i]==91){

				if(dizi2[i]==91&&dizi2[i+2]==93){
				day1=dizi2[i+1]-48;
				
				RAM[yr]=RAM[yr]|RAM[day1];
		
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
			}
		
			
			else if(dizi2[i]==91&&dizi2[i+3]==93){
					day1=(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					
				RAM[yr]=RAM[yr]|RAM[day1];
		
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+4;
				
			}
				else if(dizi2[i]==91&&dizi2[i+4]==93){
					day1=(dizi2[i+1]-48)*100+(dizi2[i+2]-48)*10+(dizi2[i+3]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
					
			RAM[yr]=RAM[yr]|RAM[day1];
		
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+5;
				
			}
				
				
			}
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58){//ATM [] SABÝT

	if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+1]<48||dizi2[i+1]>57){
		day1=dizi2[i]-48;
				RAM[yr]=RAM[yr]|day1;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+1;
						
					
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+2]<48||dizi2[i+2]>57){
		day1=(dizi2[i]-48)*10+(dizi2[i+1]-48);
				RAM[yr]=RAM[yr]|day1;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+2;
			
	}
	else if(dizi2[i]>=48&&dizi2[i]<58&&dizi2[i+3]<48||dizi2[i+3]>57){
		
				day1=(dizi2[i]-48)*100+(dizi2[i+1]-48)*10+(dizi2[i+2]-48);
					if(day1>256){
						printf("lutfen 1den 256ya kadar sayi giriniz\n");
					}
					else{
							RAM[yr]=RAM[yr]|day1;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
				i=i+3;
				
				
			}

	}
	
			
					
				
			} //ATM [] SABÝT kýsmýnýn býtýmý
			
			else{ // atm [] ax lý kýsým
				if(dizi2[i]=='A'){
					RAM[yr]=RAM[yr]|AX;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='B'){
					RAM[yr]=RAM[yr]|BX;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				else	if(dizi2[i]=='C'){
					RAM[yr]=RAM[yr]|CX;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				else	if(dizi2[i]=='D'){
						RAM[yr]=RAM[yr]|DX;
					printf("VEYA OPERATORU SONUCU RAM[%d]:degeri:%d\n",yr,	RAM[yr]);
						i=i+2;
				}
				
				
				
				
			}
			
			
			
			
			
			
// VE [] SABÝT KISMI
			
		}//VE kýsmý
		
		
		
			
			
			
			
			
			
			
		}
		
		
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	

	
	





}
