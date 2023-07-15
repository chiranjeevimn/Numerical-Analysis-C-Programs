#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) sin(x)
void main()
{
	float x0,xf,y0,yf,h,Sum,res=0;
	int n,i=0;
	printf("---------------------------------------\n");
	printf("\tSIMPSON'S 1/3 RULE\n");
	printf("---------------------------------------\n");
	printf("Enter Lower limit and Upper Limit value\n");
	scanf("%f%f",&x0,&xf);
	printf("Enter Number of interval value\n");
	scanf("%d",&n);
	h=(xf-x0)/(n);
	printf("Height = %.3f\n",h);
	y0=f(x0);
	yf=f(xf);
	Sum=(y0+yf);
	printf("---------------------------------------\n");
	printf("Itr_No.\t\tx\t\ty\n");
	printf("---------------------------------------\n");
	printf("%d\t\t%.3f\t\t%.3f\n",i,x0,y0);
	for(i=1;i<=(n-1);i++)
	{
		x0=x0+h;
		if(i%2==0)
			Sum=Sum+(2*f(x0));
		else
			Sum=Sum+(4*f(x0));
		printf("%d\t\t%.3f\t\t%.3f\n",i,x0,f(x0));
	}
	printf("%d\t\t%.3f\t\t%.3f\n",i,xf,f(xf));
	printf("---------------------------------------\n");
	res=(h/3)*(Sum);
	printf("Result = %.3f\n",res);
	printf("---------------------------------------\n");
	getch();
}
