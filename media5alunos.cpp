#include <stdio.h>
int main(){
	float nota1[5],nota2[5],media[5];
	float peso1, peso2;
	
	printf("Digite o peso 1");
	scanf("%f",&peso1);
	printf("Digite o peso 2");
	scanf("%f",&peso2);
	
	printf("Digite a nota 1");
	scanf("%f",&nota1[0]);
	printf("Digite a nota 1");
	scanf("%f",&nota1[1]);
	printf("Digite a nota 1");
	scanf("%f",&nota1[2]);
	printf("Digite a nota 1");
	scanf("%f",&nota1[3]);
	printf("Digite a nota 1");
	scanf("%f",&nota1[4]);
	printf("Digite a nota 1");
	scanf("%f",&nota1[5]);
	
	printf("Digite a nota 2");
	scanf("%f",&nota2[0]);
	printf("Digite a nota 2");
	scanf("%f",&nota2[1]);
	printf("Digite a nota 2");
	scanf("%f",&nota2[2]);
	printf("Digite a nota 2");
	scanf("%f",&nota2[3]);
	printf("Digite a nota 2");
	scanf("%f",&nota2[4]);
	printf("Digite a nota 2");
	scanf("%f",&nota2[5]);
	
	media[0]=(nota1[0]*peso1+nota2[0]*peso2);
	media[1]=(nota1[1]*peso1+nota2[1]*peso2);
	media[2]=(nota1[2]*peso1+nota2[2]*peso2);
	media[3]=(nota1[3]*peso1+nota2[3]*peso2);
	media[4]=(nota1[4]*peso1+nota2[4]*peso2);
	media[5]=(nota1[5]*peso1+nota2[5]*peso2);
	}
