int pgcd(int a, int b){
	int x, y, r;
//a > b
	if(a > b){
		x = a-b;
		r = b % x;
		while(r != 0){
			y = x;
			x = r;
			r = y%x;
		}
		return x;
	}
//a < b
	else if(a < b){
		x = b-a;
		r = a % x;
		while(r != 0){
			y = x;
			x = r;
			r = y%x;
		}
		return x;
	}
	else{
		return a;
	}
}
