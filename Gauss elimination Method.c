#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a[10][10],x[10],u,Sum,max,e,temp;
	int i,j,k,m,n;
	printf("---------------------------------------\n");
	printf("\tGAUSS ELIMINATION METHOD\n");
	printf("---------------------------------------\n");
	printf("Enter the order of matrix\n");
	scanf("%d",&n);
	printf("Enter error value\n");
	scanf("%f",&e);
	printf("Enter the co-efficient of matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			scanf("%f",&a[i][j]);
	}
	printf("---------------------------------------\n");
	printf("The Augment Matrix is \n");
	printf("---------------------------------------\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
			printf("%.3f\t",a[i][j]);
		printf("\n");
	}
	for(k=1;k<=n-1;k++)
	{
		max=fabs(a[k][k]);
		for(m=k+1;m<=n;m++)
		{
			if(fabs(a[m][k]>max))
			{
				max=fabs(a[m][k]);
			}
		}
		if(max<=e)
		{
			printf("Ill Conditioneed Equation\n");
			getch();
			exit(0);
		}
		for(k=1;k<=n-1;k++)
		{
			for(i=k+1;i<=n;i++)
			{
				u=(a[i][k]/a[k][k]);
				for(j=k;j<=n+1;j++)
                a[i][j]=a[i][j]-(u*a[k][j]);
			}
		}
	}
	x[n]=a[n][n+1]/a[n][n];
	for(i=n-1;i>=1;i--)
	{
		Sum=0;
		for(j=i+1;j<=n;j++)
        Sum=Sum+a[i][j]*x[j];
		x[i]=((a[i][n+1]-Sum)/a[i][i]);
	}
	printf("---------------------------------------\n");
	printf("The solution is\n");
	for(i=1;i<=n;i++)
		printf("x[%d]=%.3f\n",i,x[i]);
	printf("---------------------------------------\n");
	getch();
}

