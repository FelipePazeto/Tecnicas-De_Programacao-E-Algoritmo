#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int opção;
	printf("entre com valor da opção");
	scanf("%d" , opcao);
	switch (opção ){
	case 'a':
		printf ("comando executado no case 1 pq o case coincidiu com a opçao digitada");
		break;
	case 'b':
		printf("comando executado no case 2 pq o case coincidiu com a opço digitada");
		break;
	case 'c':
		printf("comando executado no case 3 pq o case coincidiu com a opção digitada");
		break;
	default
		printf("comando executado caso nenhuma das opções anteriores tenha sido escolhido");
		
	}
	
	}
	
}
