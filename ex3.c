#include<stdio.h>
#include"fonction.h"
void main(){
	int a, b;
	printf("donne deux nombres:");
	scanf("%d %d", &a, &b);
	printf("le pgcd est %d", pgcd(a, b));
}
