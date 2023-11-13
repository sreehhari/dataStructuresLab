#include<stdio.h>
//func
int sort(int arr[],int n){
    int i,j,temp,min;
    for (i = 0; i < n-1; i++)
    {min =i;//considers the first element as the smallest element 
        for (j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min =j;
            }
            
        }
        if (min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
        
    }
}





int main(){
    int n;
    printf("enter the number of elements in the array \n");
    scanf("%d",&n);
    int array[n];
    printf("enter the unsorted array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(array,n);
    printf("The sorted array is gonna get printed\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }
    
    





}