#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	int mam,quad,carn,herb,voa,rast,resp;
	float mim;
	printf("\n\t Deseja jogar o jogo dos animais?\n\t1-Sim 2-N�o\n\t");
		scanf("%d",&resp);
	system("cls");
	if(resp==1){
		printf("\nEscolha um animal e responda as perguntas:\n\tLe�o\t\t\tCavalo\n\tHomem\t\t\tMacaco\n\tMorcego\t\t\tBaleia\n\tAvestruz\t\tPinguim\n\tPato\t\t\t\�guia\n\tTartaruga\t\tCrocodilo\n\tCobra\n\t");
		printf("\n\tEle � mam�fero?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&mam);
		system("cls");
		printf("\n\tEle � Ele � quadr�pede?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&quad);
		system("cls");
		printf("\n\tEle � Ele � carn�voro?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&carn);
		system("cls");
		printf("\n\tEle � Ele � herb�voro?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&herb);
		system("cls");
		printf("\n\tEle voa?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&voa);
		system("cls");
		printf("\n\tEle depende da eletricidade?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&rast);
		system("cls");
		if(mam==1&quad==1&carn==1&herb==2){
			printf("\n\tO animal escolhido foi o Le�o");
		};
		printf("\n\tDeseja jogar novamente?\n\t1-Sim 2-N�o\n\t")
			scanf("%f",&mim);
			while(mim==1){
				do{
						printf("\n\t Deseja jogar o jogo dos animais?\n\t1-Sim 2-N�o\n\t");
		scanf("%d",&resp);
	system("cls");
	if(resp==1){
		printf("\nEscolha um animal e responda as perguntas:\n\tLe�o\t\t\tCavalo\n\tHomem\t\t\tMacaco\n\tMorcego\t\t\tBaleia\n\tAvestruz\t\tPinguim\n\tPato\t\t\t\�guia\n\tTartaruga\t\tCrocodilo\n\tCobra\n\t");
		printf("\n\tEle � mam�fero?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&mam);
		system("cls");
		printf("\n\tEle � Ele � quadr�pede?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&quad);
		system("cls");
		printf("\n\tEle � Ele � carn�voro?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&carn);
		system("cls");
		printf("\n\tEle � Ele � herb�voro?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&herb);
		system("cls");
		printf("\n\tEle voa?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&voa);
		system("cls");
		printf("\n\tEle depende da eletricidade?\n\t1-Sim 2-N�o\n\t");
			scanf("%d",&rast);
		system("cls");
		if(mam==1&quad==1&carn==2){
			printf("\n\tO animal escolhido foi o Cavalo");
		};
		printf("\n\tDeseja jogar novamente?\n\t1-Sim 2-N�o")
			scanf("%d",&cont);                                                                            
				}
			}
		
	};
	
	return 0;
}
