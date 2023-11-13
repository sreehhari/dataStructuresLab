#include<stdio.h>
//func
void sort(int arr[],int n){
    int i,j,key;
    for ( i = 1; i < n; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j] > key)
        {
         arr[j+1]=arr[j];
         j=j-1;
        }
        arr[j+1]=key;
        
    }
    

}
int main(){
    int n;
    printf("enter the number of elements in the array \n");
    scanf("%d",&n);
        int array[n];

    printf("enter the unsorted array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    sort(array,n);

    printf("The sorted array is gonna get printed \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }
    
    




return 0;

}