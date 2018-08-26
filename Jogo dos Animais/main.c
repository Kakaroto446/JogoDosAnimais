#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int mam,quad,carn,herb,voa,rast,resp;
	float mim;
	printf("\n\t Deseja jogar o jogo dos animais?\n\t1-Sim 2-Não\n\t");
		scanf("%d",&resp);
	system("cls");
	if(resp==1){
		printf("\nEscolha um animal e responda as perguntas:\n\tLeão\t\t\tCavalo\n\tHomem\t\t\tMacaco\n\tMorcego\t\t\tBaleia\n\tAvestruz\t\tPinguim\n\tPato\t\t\t\Águia\n\tTartaruga\t\tCrocodilo\n\tCobra\n\t");
		printf("\n\tEle é mamífero?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&mam);
		system("cls");
		printf("\n\tEle é Ele é quadrúpede?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&quad);
		system("cls");
		printf("\n\tEle é Ele é carnívoro?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&carn);
		system("cls");
		printf("\n\tEle é Ele é herbívoro?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&herb);
		system("cls");
		printf("\n\tEle voa?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&voa);
		system("cls");
		printf("\n\tEle depende da eletricidade?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&rast);
		system("cls");
		if(mam==1&quad==1&carn==1&herb==2){
			printf("\n\tO animal escolhido foi o Leão");
		};
		printf("\n\tDeseja jogar novamente?\n\t1-Sim 2-Não\n\t")
			scanf("%f",&mim);
			while(mim==1){
				do{
						printf("\n\t Deseja jogar o jogo dos animais?\n\t1-Sim 2-Não\n\t");
		scanf("%d",&resp);
	system("cls");
	if(resp==1){
		printf("\nEscolha um animal e responda as perguntas:\n\tLeão\t\t\tCavalo\n\tHomem\t\t\tMacaco\n\tMorcego\t\t\tBaleia\n\tAvestruz\t\tPinguim\n\tPato\t\t\t\Águia\n\tTartaruga\t\tCrocodilo\n\tCobra\n\t");
		printf("\n\tEle é mamífero?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&mam);
		system("cls");
		printf("\n\tEle é Ele é quadrúpede?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&quad);
		system("cls");
		printf("\n\tEle é Ele é carnívoro?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&carn);
		system("cls");
		printf("\n\tEle é Ele é herbívoro?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&herb);
		system("cls");
		printf("\n\tEle voa?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&voa);
		system("cls");
		printf("\n\tEle depende da eletricidade?\n\t1-Sim 2-Não\n\t");
			scanf("%d",&rast);
		system("cls");
		if(mam==1&quad==1&carn==2){
			printf("\n\tO animal escolhido foi o Cavalo");
		};
		printf("\n\tDeseja jogar novamente?\n\t1-Sim 2-Não")
			scanf("%d",&cont);                                                                            
				}
			}
		
	};
	
	return 0;
}
