#include <stdio.h> 
#include <math.h> 

int main(void)
{
	double xi,xf,d=0.000002,xc,integral=0;
	printf("Enter x initial and x final for x*sin(3*x)*2^x's integral respectively:\n");
	scanf("%lf%lf",&xi,&xf);
	xc=xi;
	while (xc<=xf)
	{
		integral= integral + d*((xc+d/2)*(sin(3*(xc+d/2)))*pow(2,xc+d/2));
		xc=xc+d;
	}
	printf("The integral of f(x)= x*sin(3*x)*2^x from %lf to %lf = %lf", xi, xf, integral);
}
