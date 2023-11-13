#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int a;// the element to be found

    printf("enter the number to be searched\n");
    scanf("%d",&a);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==a)
        {
            printf("element found\n");
            printf("\n");
            printf("the element's index is %d",i);
            break;
        }
        else{
            printf("element not found\n");
        }
        
    }
    





}