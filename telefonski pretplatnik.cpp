#include <stdio.h>
int main () {
	int x;
	scanf("%d", &x);
	printf("%03d/%03d-%03d", x/1000000, (x/1000)%1000, x%1000);
		if((x/1000000 == 70) || (x/1000000 == 71) || (x/1000000 == 72))
		{
			printf(" T- Mobile", x);
		}
		if((x/1000000 == 75) || (x/1000000 == 76) || (x/1000000 == 77) || (x/1000000 == 78))
		{
			printf(" Vip", x);
		}
return 0;
}
