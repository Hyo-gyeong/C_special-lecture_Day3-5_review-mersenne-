#include <stdio.h>//*********************�����ذ� �� ����!********************************
#include <math.h>
//math����� pow(��, ����)�������

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

	for(i = 1; i <= p; i++) {//�Է��� ����ŭ 2������ ����

		result = (int) pow((double)a, (double)i) - 1; //���������� ������ ǥ���ϴ� ���! ����صα�~~ //�޸��� �Ҽ� �Ǻ��� �� �ִ� ������ ���� �ٲ�

		if (i == 1) //1�ǰ�� ������ ����̹Ƿ� ������� for���� �׻� �ɸ�.
			printf("%d			%d\n", i, result);

		else {
			for(k = 2; k <= result; k++) { //result�� �ٲ� ���������� �Ҽ����� �ƴ��� �Ǵ�
				if(k == result)
					printf("%d			%d\n",i, result);
				else if(result % k == 0) //�� �ڵ带 �������� �Ǹ� result == k�� ��쵵 �ɷ����ԵǱ� ������ ���� if���� ���ǹ��� ���� �����־�� ��.
					break; //����� �ִ� ��� �ݺ��� ���������� ��.
			}
		}
	}
	return;
}