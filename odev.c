#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {

	
	int b = 0;

	pid_t pid;

	do {
		printf("0 dan büyük bir sayi giriniz lütfen:");
		scanf("%d", &b);
	} while (k <= 0)
		pid = fork();

	if (pid==0)

	{
		printf("çocuk çalışma halinde...\n");
		printf("%d\n", b);
		while (b!=1)
		{
			if (b % 2 == 0)
			{
				b = b / 2;
			}
			else if (b % 2 == 1)
			{
				b = 3 * (b)+1;
			}
			printf("%d\n", b);
		}
		printf("çocuk  işlemi yapılıyor");
	}
	else
	{
		printf("çocuk beklenme durumunda\n");
		wait();
		printf("ebeveyn işlemi yapılıyor");
	}
	return 0;
}
