#include <stdio.h>
int main () {
	int broj;
	printf("Vnesi pet cifren broj ");
	scanf("%d", &broj);
		if(broj<=9999 || broj>=100000)
		printf("brojot ne e pet cifren\n");
		else if (broj>9999 && broj<100000)
		{
		int a,b,c,d;
		d=broj%10;
		c=(broj%10)%10;
		b=broj%10000;
		a=broj/10000;
			if(a==d && b==c)
				printf("brojot e palindrom\n");
			else if(a==d && a==b && a==c && b==d && b==c && c==d )
				printf("brojot e palindrom\n");
			else
				printf("brojot ne e palindrom\n");
		}
return 0;
}
