#include<stdio.h>
#include<conio.h>
#define f(x) 1/(1+x*x)
void main()
{
	float x,x0,xf,y0,yf,h,Sum,res,term;
	int n,i=0;
	printf("---------------------------------------\n");
	printf("\tTRAPEZOIDAL RULE\n");
	printf("---------------------------------------\n");
	printf("Enter Lower Limit and Upper Limit value\n");
	scanf("%f%f",&x0,&xf);
	printf("Enter number of Interval value\n");
	scanf("%d",&n);
	h=(xf-x0)/n;
	printf("Height = %.3f\n",h);
	y0=f(x0);
	yf=f(xf);
	Sum=((y0+yf)/2);
	printf("---------------------------------------\n");
	printf("Itr_No.\t\tx\t\ty\n");
	printf("---------------------------------------\n");
	printf("%d\t\t%.3f\t\t%.3f\n",i,x0,y0);
	for(i=1;i<=n-1;i++)
	{
		x=x0+i*h;
		Sum=Sum+f(x);
		printf("%d\t\t%.3f\t\t%.3f\n",i,x,f(x));
	}
	printf("%d\t\t%.3f\t\t%.3f\n",i,xf,f(xf));
	printf("---------------------------------------\n");
	res=h*Sum;
	printf("Result = %.3f\n",res);
	printf("---------------------------------------\n");
	getch();
}
