int puissance(int a, int b){
	int j=1, p=1;
	if(b == 0)
		return p = 1;
	else{
		while(j<=b){
			p *= a;
			j++;
		}
	}
	return p;
}
int somme_tableau(int a, int T[]){
	int i=0, s=0;
	for(i;i<=a;i++){
		s += T[i];
	}
	return printf("la somme est: %d\n", s);
}
void fonction_principale(int coeff[], int poly[]){
	int x, n, i;
	//valeur x et n
	printf("donne un nombre pour x, nombre pour n:");
	scanf("%d %d", &x, &n);
	coeff[n+1],poly[n+1];
	//tableau coeff
	printf("\n******remplire le tableau de coefficient******\n");
	for(i=0;i<=n;i++){
		printf("coeff[%d]=", i);
		scanf("%d", &coeff[i]);
	}
	//tableu de poly
	printf("\n******remplire le tableau de polynome******\n");
	for(i=0;i<=n;i++){
		poly[i] = coeff[i]*puissance(x, i);
		printf("poly[%d]=%d\n", i, poly[i]);
	}
	printf("remplissage complet\n");
	//evaluation de x;
	printf("\n******execution ******\n");
	somme_tableau(n, poly);

}
