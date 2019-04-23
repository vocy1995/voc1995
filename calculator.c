#include <stdio.h>

int add(int a, int b) {

	return a + b;
}

int sub(int a, int b) {

	return a - b;
}

int main() {

	int input_1 = 0;
	int input_2 = 0;
	char input_AO =0;

	printf("계산하고싶은 숫자 두개를 입력하세요\n");
	scanf_s("%d %d",&input_1,&input_2);

	printf("계산하고 싶은 방식을 입력하세요(+,-,*,/)\n");
	scanf_s(" %c",&input_AO);

	switch (input_AO) {
	case '+':
		printf("더하기 출력하기\n");
		printf("%d + %d = %d", input_1, input_2, add(input_1, input_2));
		break;
	case '-':
		printf("빼기 출력하기\n");
		printf("%d - %d = %d\n", input_1, input_2, sub(input_1, input_2));
		break;
	case '*':
		printf("곱하기 출력하기\n");
		printf("%d * %d = %d\n", intput_1, input_2, mul(intput_1, input_2));
		break;
	defalut: printf("알수없는 문자입니다.");
	}


	return 0;
}
