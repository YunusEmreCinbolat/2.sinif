#include<stdio.h>
#include<string.h>

char yigit[1000];
int top=0;
int bottom=0;
int operatorkont(int bas){
	if(yigit[bas]=='{' || yigit[bas]=='}' || yigit[bas]=='(' || yigit[bas]==')' ){
		return 1;
	}
	return 0;
}
int operandkont(int bas){
	if(yigit[bas]=='+' || yigit[bas]=='-' || yigit[bas]=='*' || yigit[bas]=='/'  || yigit[bas]=='%'  || yigit[bas]=='=' || yigit[bas]=='&' ){
		return 1;
	}
	return 0;
}
int noktakont(int bas){
	if(yigit[bas]==':' || yigit[bas]==';' || yigit[bas]==',' || yigit[bas]=='.'){
		return 1;
	}
	return 0;
}
int harfkont(int bas){
	if(yigit[bas]>=65 && yigit[bas]<=90 ){
		return 1;
	}
	return 0;
}
int rakamkont(int bas){
	if(yigit[bas]=='1' || yigit[bas]=='2' || yigit[bas]=='3' || yigit[bas]=='4' || yigit[bas]=='5' || yigit[bas]=='6' || yigit[bas]=='7' || yigit[bas]=='8' || yigit[bas]=='9' || yigit[bas]=='0'){
		return 1;
	}
	return 0;
}

int main(){
	FILE *dd;
	char no; 
	char dosya[1000];
	char kelime[100];
	int i=0;
	int j=0;
	char dosyayolu[256];
	printf("Dosya yolu giriniz: ");
	gets(dosyayolu);
	if ((dd=fopen(dosyayolu,"r")) == NULL)
		printf("Surucu veya dosya bulunamadi.\n");
	else{ 
		while (fscanf(dd,"%c",&no)!=EOF){
			printf("%c",no);
			 dosya[i++]=no;
	   }
	   i=0;
	   while(dosya[i]!='\0'){
	   		if(dosya[i]==10 || dosya[i]==32){}
	   		else{
	   	    	kelime[j++]=dosya[i];		
		   }
		   i++;
	   }
		printf("\n");
	    i=0;
	    printf("{ ");
	    while(kelime[i]!='\0'){
	    	if(  kelime[i]!=','  && kelime[i]!='?') {
	           printf("%c",kelime[i]);		
			}
			
		   	if(  kelime[i]=='>'  && kelime[i+1]=='=') {
	           i++;
			   continue;
	           
			}
			
			
			if( (kelime[i+1]=='(' || kelime[i]=='(' || kelime[i+1]==')' || kelime[i]==')'  || kelime[i-1]=='{' || kelime[i]=='{' ||kelime[i+1]=='=' || kelime[i]=='=' || kelime[i+1]=='*' || kelime[i]=='*' || kelime[i+1]==';' || kelime[i]==';' || kelime[i+1]=='<' || kelime[i]=='<' || kelime[i+1]=='>' )  ){
				printf(",");
			}
			
			if(kelime[i+1]=='+' && (kelime[i+1]=='+'&& kelime[i+2]=='+')){
				printf(",");
				i++;
				continue;
			}
			if(kelime[i]=='+' && kelime[i+1]=='+'){
				i++;
				continue;
			}
			
					if(kelime[i+1]=='+' ){
				printf(",");
			}
			if(kelime[i]=='+'){
				printf(",");
			}
			
			i++;
			}
		
		}
			
		
		printf(" }");	
	
		
         fclose(dd);
	}



