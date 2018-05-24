#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c, d, x1, x2 = 0;
	printf("Введіть a,b,c: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d = b*b - 4*a*c + 1;
	if (d < 0){
		printf("D < 0\n");
	}	
	else{
		printf("D = %d\n", d);
		x1 = (-b + sqrt(d))/(2*a);
		x2 = (-b - sqrt(d))/(2*a);
		printf("X1 = %d\n", x1);
		printf("X2 = %d\n", x2);
	}
	return 0;
}
