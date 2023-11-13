#include<stdio.h>
//func
int srch(int arr[],int n,int m){
    int left =0; //first index
    int right =n-1;//last index
    int mid;//middle index
    while (left<=right)
    {
        mid=(left+right)/2;
    
    if (arr[mid]==m)
    {
        printf("The element is found\n");
        return mid;
    }
    
    if(arr[mid]<m){
        left = mid +1;

    }
    else{
        right = mid -1;
    }

    
    
    }
    return -1;
}
int main(){
    int n;
    int m;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements in the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter the element to be searched \n");
    scanf("%d",&m);
    int result =srch(array,n,m);

    if (result!=-1)
    {
        printf("the element is found at the index %d",result);
    }

    else{
        printf("the element is not found/n");
    }
    

    




return 0;


}