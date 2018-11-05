#include <stdio.h>
int main () {
	int a,b,c,d,p;
	scanf("%d", &p);
	if(p>=10000 && p<=99999)
	{
		a = p/10000;
		b = p % 10;
		c = (p / 1000) % 10;
		d = (p%100) / 10;
		if((a==b)&&(c==d))
			printf("Palindrom");
		else if ((a!=b)||(c!=d))
			printf("Ne e palindrom");
	}
	else
	printf("Nevaliden vlez");
return 0;
}
