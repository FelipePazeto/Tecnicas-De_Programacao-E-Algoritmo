#include<stdio.h>
#include<locale.h>
    int main (){
	setlocale(LC_ALL, "portuguese");
	int impar = 1;
	int quantidade;
	int i =1;
	printf("digite quantidade de numeros impares q seja impresso na tela");
	scanf("%d" , &quantidade);
	while(i<=quantidade){
		printf("%d\t",impar);
		impar = impar + 2;
		i++;
	}
	 return 0;
	
	
	
}

