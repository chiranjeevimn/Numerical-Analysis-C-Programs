#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x)-12
#define df(x) 3*x*x
void main()
{
	int i,n;
	float x0,x1,e,y0,y1;
	printf("--------------------------------------------------\n");
	printf("\t\t\t NEWTON RAPHSON METHOD\n");
	printf("--------------------------------------------------\n");
	printf("Enter initial guess , error value and number of iteration \n");
	scanf("%f%f%d",&x0,&e,&n);
	printf("--------------------------------------------------\n");
	printf("Itr_No.\tx0\t f0\t df0\n");
	printf("--------------------------------------------------\n");
	for(i=1; i<=n; i++)
	{
		y0=f(x0);
		y1=df(x0);
		if(fabs(y1)<=0)
		{
			printf("Slope is too small!\n");
	printf("itr_no = %d\t x0 = %.3f\n y0 = %.3f\t y1 = %.3f\n",i,x0,y0,y1);
			printf("--------------------------------------------------\n");
			getch();
			exit(0);
		}
		x1=x0-(y0/y1);
		if(fabs((x1-x0)/x1)<=e)
		{
			printf("--------------------------------------------------\n");
			printf("Solution Converges to a root\n");
		printf("x1 = %.3f\tf(x1) = %.3f\t  df(x1) = %.3f\n", x0, f(x1), df(x1));
			printf("Number of Iterations: %d\n",i-1);
			printf("--------------------------------------------------\n");
			getch();
			exit(0);
		}
		printf("%d\t  %.3f\t %.3f\t %.3f\n",i,x0,y0,y1);
		x0=x1;
	}
	printf("--------------------------------------------------\n");
	printf("Does not converge in %d iterations\n",n);
	printf("x0 = %.3f\tf0 = %.3f\tdf0 = %.3f\n",x0,y0,y1);
	printf("--------------------------------------------------\n");
	getch();
}


