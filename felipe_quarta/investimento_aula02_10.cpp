#include<locale.h>
#include<stdio.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	float p, p2, r, a;
	int t;
	
	// P = capital , r =juros ,a = valor final, t= anos
	
	printf("digite o capital inicial (p)");
	scanf("%f", &p);
	
	printf("digite a taxa de juros anual");
	scanf("%f", &r);
	
	printf("digite o numero de anos (t): ");
	scanf("%d" , &t);
	
	p2= p;
	for (int i= 1; i <= t; i++){
		a= p2 * pow(i +r , i);
		printf("o valor acumulado e:%f " ,a);
	}
	
}

  
  
