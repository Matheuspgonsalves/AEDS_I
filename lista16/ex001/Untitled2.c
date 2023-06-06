#include <stdio.h> 

void printa(int n) {
	if(n == 1) {
		printf("%i", n);
	}else {
		printa(n-1);
		printf("%i ", n);
	}
}

int main() {
	int x = 5;
	
	printa(x);
	
	
}
