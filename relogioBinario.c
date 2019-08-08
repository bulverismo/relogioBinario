#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 7

void calculaBinario(int calcMe);
int main(int argc, char *argv[]){
	int valor=0;
	int hora,minuto,segundo;

	system("clear");
		
	hora = atoi (argv[1]);
	minuto = atoi (argv[2]);
	segundo = atoi (argv[3]);

	
	calculaBinario(hora);
	printf(" : ");
	calculaBinario(minuto);
	printf(" : ");
	calculaBinario(segundo);
	printf("\n");

	return 0;
}

void calculaBinario(int calcMe){
	int x=0;
	int y=7;
	int gate=1;
	int impressao[8]= { 0 };
	if (calcMe==0){
		gate=0;
	}
	while(gate){
		
		impressao[y]= (calcMe%2) ;
		y--;
		
		if (calcMe/2==1){
			
			impressao[y]=1;
			gate=0;
	
		}else if (calcMe == 1){
			gate=0;
	
		}else{
			calcMe = calcMe/2;
		}	
	
	}
	while(x <= TAM){
	
		printf("%d",impressao[x]);
		x++;
	
	}
}
