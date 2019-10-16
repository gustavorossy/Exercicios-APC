#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define TAMANHO 9

void preenche(); // preenche o tabuleiro inicialmente
void print(); // printa tabuleiro
int inicio(); // tela inicial e possibilidade do jogador jogar primeiro ou segundo
char converte(); // converte o numero do player nos caracteres "X", " " ou "O"


int main(){

	int tabuleiro[TAMANHO], pl, pc, rodada = 0;
	char player[20], opcao;

	preenche(tabuleiro);

	if(inicio(player)==1){
		pl == 1;
		pc == 2;
	}
	else {
		pl == 2;
		pc == 1;
	}

	if(pl==1){
		for(rodada=0;rodada<TAMANHO;rodada++){
			print(tabuleiro);
			if((rodada+player)%2!=0) PlayerMove(tabuleiro, pl, player);
			else {
				printf("\nVez do computador...");
				sleep(4);

			} 
		}
	}
	



	return 0;
}

void preenche(int t[]){
	int i;

	for (i=0;i<TAMANHO;i++){
		t[i] = 0;
	}
}

void print(int t[]){
	printf(" %c | %c | %c \n", converte(t[0]), converte(t[1]), converte(t[2]));
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", converte(t[3]), converte(t[4]), converte(t[5]));
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", converte(t[6]), converte(t[7]), converte(t[8]));
}

int inicio(char player[]){
	int opcao;
	printf("Bem vindo ao jogo da velha!\n");
	printf("Para começar, digite o seu nome: ");
	scanf("%s", player);
	printf("\nVoce quer jogar primeiro (1) ou segundo (2)?: ");
	scanf("%i", &opcao);
	return opcao;
}

char converte(int aux){
	if(aux==1) return 'X';
	else if(aux==0) return ' ';
	else if(aux==2) return 'O';
}

void PlayerMove(int t[], int p, char player[]){
	int pos;
	printf("%s, Digite a posicao que deseja jogar[1..9]: \n", player);
	scanf("%i", &pos);
	t[pos-1] = p;
}

void PcMove(int t[]){
	
}
