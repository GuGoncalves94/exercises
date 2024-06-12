#include<stdio.h>

int soma(int num);

int main() {
	int num;
	int answer;
	
	scanf("%d", &num);

	answer = soma(num);
	
	printf("%d", answer);



	return 0;
}

int soma(int num) {
	int soma;
	
	while(num > 0) {
		soma += num % 10;
		num -= num % 10;
		num = num / 10;
	} 
		
	return soma;
}
