#include<locale.h>
#include<stdio.h>
int main(){
	setlocale(LC_ALL , "portuguese");
	int soma,a,b;
	printf("digite valor da variavel a: ");
	scanf("%d", &a);
	printf("digite valor da variavel b: ");
	scanf("%d" , &b);
	soma= a + b;
	printf("valor das variveis a + b e igual valor da soma: %d", soma);
	
		
    
	
	
	
    
	

	
	
}
