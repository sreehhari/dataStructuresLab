#include<stdio.h>
//functions


int main(){


int n;
printf("enter the size of the array \n");
scanf("%d",&n);
int array[n];

for (int i = 0; i < n; i++)
{
    scanf("%d",&array[i]);
}

for (int i = 0; i < n-1; i++)
{
    for (int  j = 0; j < n-i-1; j++)
    {
        // int temp;
        if (array[j]>array[j+1])
        {
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
        
    }
    
}


//printing the sorted array

for (int i = 0; i < n; i++)
{
    printf("%d \t",array[i]);
}
int k;
printf("\n");

printf("enter the number to be searched\n");
scanf("%d",&k);



printf("the %dth largest in the array is %d",k,array[n-k]);

return 0;

}