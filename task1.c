#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "RUS");
	int m, n;
	int k = 0;
	int S = 0;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (int l = m; l >= n; l--) {
		S += l;
		printf("��������� %d ���\n", k++);
	}
	printf("��������� %d", S);


}