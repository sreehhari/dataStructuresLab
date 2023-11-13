#include<stdio.h>


int main(){


int n;
int count =1;
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
        if (array[j]>=array[j+1])
        {
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
        
    }
    
}


//printing the sorted array

// for (int i = 0; i < n; i++)
// {
//     printf("%d \t",array[i]);
// }

printf("now the search begins\n");

for (int i = 0; i < n; i++)
{
    if (array[i]==array[i+1])
    {
        count++;
    }
    else{
        if (count>1)
        {
            printf("the element %d is repeated %d  times\n",array[i],count);
            count =1;
        }
        
    }    
}




}