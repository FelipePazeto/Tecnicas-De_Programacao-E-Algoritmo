#include<stdio.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int op��o;
	printf("entre com valor da op��o");
	scanf("%d" , opcao);
	switch (op��o ){
	case 'a':
		printf ("comando executado no case 1 pq o case coincidiu com a op�ao digitada");
		break;
	case 'b':
		printf("comando executado no case 2 pq o case coincidiu com a op�o digitada");
		break;
	case 'c':
		printf("comando executado no case 3 pq o case coincidiu com a op��o digitada");
		break;
	default
		printf("comando executado caso nenhuma das op��es anteriores tenha sido escolhido");
		
	}
	
	}
	
}
