#include<stdio.h>

//func

int main(){
    int n;//number of students
    printf("enter the number of students\n");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }
    //bubble sort

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <n-1-i; j++)
        {
            if (marks[j]>marks[j+1])
            {
                int temp;
                temp =marks[j];
                marks[j]=marks[j+1];
                marks[j+1]=temp;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \t",marks[i]);
    }
    
    return 0;
    




}