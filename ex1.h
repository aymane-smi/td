int nombre(int n){
	int i=0, j = n/10;
	if(n == 0)
		return printf("le nombre des chiffres est:0");
	else
		do{
			n = n/10;
			i++;
		}while(n != 0);
	return printf("le nombre est:%d", i);
}
