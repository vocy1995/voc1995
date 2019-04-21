#include <stdio.h>

int add(int a, int b){

	return a+b;
}

int main(){

	printf("더하기 출력하기");
	printf("%d + %d = %d", 3, 2, add(3,2)); 	

	return 0;
}
