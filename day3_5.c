#include <stdio.h>//*********************오류해결 및 복습!********************************
#include <math.h>
//math헤더에 pow(밑, 지수)들어있음

void displayMersennePrime (int p);

int main(void)
{
	int input;
	
	printf("Enter a number(<= 31): ");
	scanf("%d", &input);
	printf("p                   2^p-1\n");
	printf("--------------------------\n");

	displayMersennePrime(input);
}

void displayMersennePrime (int p)
{
	int result;
	int a = 2;
	int i, k, prime;

	for(i = 1; i <= p; i++) {//입력한 수만큼 2의제곱 추출

		result = (int) pow((double)a, (double)i) - 1; //정수형으로 지수를 표현하는 방법! 기억해두기~~ //메르센 소수 판별할 수 있는 조건의 수로 바꿈

		if (i == 1) //1의경우 모든수의 약수이므로 약수판한 for문에 항상 걸림.
			printf("%d			%d\n", i, result);

		else {
			for(k = 2; k <= result; k++) { //result로 바꾼 수를가지고 소수인지 아닌지 판단
				if(k == result)
					printf("%d			%d\n",i, result);
				else if(result % k == 0) //이 코드를 먼저쓰게 되면 result == k인 경우도 걸러지게되기 때문에 앞의 if문의 조건문을 먼저 적어주어야 함.
					break; //약수가 있는 경우 반복문 빠져나가야 함.
			}
		}
	}
	return;
}