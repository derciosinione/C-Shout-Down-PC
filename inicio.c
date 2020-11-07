/*
	Name: Dércio Sinione Derone 
	Copyright: yes
	Author: Dércio Sinione Derone
	Date: 04/06/17 00:53
	Description: 
	Este é um programa criado para poder desligar o teu pc quando não estiveres cordado para o fazer 
*/
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<locale.h>
#include<time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	system("color 0F");
	system("color F");
	int n,i,c,d,soma,calc,hora,min,t;
    puts("\t\t\t\t\t _____________________________________");	
	puts("\t\t\t\t\t|   Seja Bem-Vindo a Console Derone   |");
	puts("\t\t\t\t\t|_____________________________________|");
	puts("\t\t\t\t\t|__________________PDS________________|");
	puts("\t\t\t\t\t|                                     |");
	puts("\t\t\t\t\t|    Para Continuar digite a tecla 1  |");
	puts("\t\t\t\t\t|       Para sair digite a tecla 2    |");
    puts("\t\t\t\t\t|_____________________________________|");
    puts("\t\t\t\t\t|_____________________________________|\a");
scanf("%d", &n);
system("cls");
switch(n){
	case 1 :
	
		for(c=0;c<=100;c++){
	if(c%2!=0){
	soma=c;
	puts("\t\t\t\t\t _____________________________________________");
	puts("\t\t\t\t\t|      Aguarde a inicialização do programa    |");
	puts("\t\t\t\t\t|______________________PDS____________________|");
	puts("\t\t\t\t\t|                                             |");	
  printf("\t\t\t\t\t|            Carregando...%d %%                |\n", soma);
	puts("\t\t\t\t\t|_____________________________________________|");
	puts("\t\t\t\t\t|_____________________________________________|");
	_sleep (2);
	
	}
system("cls");
}
	puts("\t\t\t\t\t ______________________________________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|  Durante quanto tempo queres que o pc fique activo   |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|                 1   Durante Horas                    |");
	puts("\t\t\t\t\t|                 2  Durante Minutos                   |");
	puts("\t\t\t\t\t|______________________________________________________|");	
	puts("\t\t\t\t\t|______________________________________________________|\a");	
	scanf("%d", &t);
	system("cls");
		
	if(t==1){
		
			for(c=0;c<=100;c++){
	if(c%2!=0){
		soma=c;
	system("cls");
	puts("\t\t\t\t\t _____________________________________________");
	puts("\t\t\t\t\t|      Aguarde a inicialização do programa    |");
	puts("\t\t\t\t\t|______________________PDS____________________|");
	puts("\t\t\t\t\t|                                             |");	
  printf("\t\t\t\t\t|            Carregando...%d %%               |\n", soma);
	puts("\t\t\t\t\t|_____________________________________________|");
	puts("\t\t\t\t\t|_____________________________________________|");
	_sleep (2);

	}
}system("cls");
	puts("\t\t\t\t\t ______________________________________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|   Digite a hora que desejas que o pc fique ligado    |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|________________________PDS___________________________|");
	puts("\t\t\t\t\t********************************************************\a");
	scanf("%d", &hora);
	calc=(hora*3600);
	for(c=0;c<=calc;c++){
				soma=c;
	system("cls");
	puts("\t\t\t\t\t ______________________________________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|           Aguarde a inicialização do programa        |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|________________________PDS___________________________|");	
	puts("\t\t\t\t\t|                                                      |");	
  printf("\t\t\t\t\t|               Carregando...%d seg                     |\n", soma);
	puts("\t\t\t\t\t|______________________________________________________|");	
	puts("\t\t\t\t\t|______________________________________________________|");
	_sleep (1000);
}
system("shutdown /h");
}

		if(t==2){
			
				for(c=0;c<=100;c++){
	if(c%2!=0){
		soma=c;
	system("cls");
	puts("\t\t\t\t\t _____________________________________________");
	puts("\t\t\t\t\t|      Aguarde a inicialização do programa    |");
	puts("\t\t\t\t\t|______________________PDS____________________|");
	puts("\t\t\t\t\t|                                             |");	
  printf("\t\t\t\t\t|            Carregando...%d %%                |\n", soma);
	puts("\t\t\t\t\t|_____________________________________________|");
	puts("\t\t\t\t\t|_____________________________________________|");
	_sleep (8);

	}
}system("cls");
	puts("\t\t\t\t\t ______________________________________________________\a"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t| Digite os minutos que desejas que o pc fique ligado  |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|______________________________________________________|\a");	
	scanf("%d", &min);
	calc=(min*60);
	for(c=0;c<=calc;c++){
		
	system("cls");
				soma=c;
	puts("\t\t\t\t\t ______________________________________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|           Aguarde a inicialização do programa        |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|________________________PDS___________________________|");	
	puts("\t\t\t\t\t|                                                      |");	
  printf("\t\t\t\t\t|                  Carregando...%d seg                  |\n", soma);
	puts("\t\t\t\t\t|______________________________________________________|");	
	puts("\t\t\t\t\t|______________________________________________________|");
			_sleep (1000);
			}
system("shutdown /h");
 }
else {
		
	puts("\t\t\t\t\t ________________________ERROR_________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|           A opção escolhida não está registada       |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|______________________CKECK WELL______________________|");	
	puts("\t\t\t\t\t|______________________________________________________|\a");
	
			break;
}
case 2:
	system("cls");
system("exit");
break;
default :
	system("color C");
    puts("\t\t\t\t\t ________________________ERROR_________________________"); 
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|                                                      |");	
	puts("\t\t\t\t\t|           A opção escolhida não está registada       |");
	puts("\t\t\t\t\t|______________________________________________________|");
	puts("\t\t\t\t\t|______________________CKECK WELL______________________|");	
	puts("\t\t\t\t\t|______________________________________________________|\a");
system("exit");
break;	 
}
}

