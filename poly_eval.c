#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[30],n,x,i,sum;
	printf("Enter the no of terms : ");
	scanf("%d",&n);
	printf("Enter the polynomial terms : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int pow=n-1;
	for(i=0;i<n;i++)
	{
		if(pow<0)
			break;
		if(a[i]>0)
			printf(" + ");
			else if(a[i]<0)
				printf(" - ");
				else
					printf(" ");
		printf(" %dx^%d",abs(a[i]),pow--);
	}
	sum=a[0];
	printf("\nEnter the value of x : ");
	scanf("%d",&x);
	for(i=1;i<n;i++)
	{
		sum=sum*x+a[i];
	}
	printf("The value is : %d\n",sum);
}
