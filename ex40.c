#include <stdio.h>

int main(void)
{
	int n;

	printf("正の整数を入力してください > ");
	scanf("%d", &n);

	while (n >= 1)
	{
		printf("%d ", n);
		--n;
	}

	printf("\n");

	return 0;
}
