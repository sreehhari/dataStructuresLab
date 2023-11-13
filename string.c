#include<stdio.h>
#include<string.h>

int main(){
    char input[]="testing";
    int freq[256]={0};

    for (int  i = 0;input[i]!= '\0'; i++)
    {
        int asciival=(int)input[i];
            freq[asciival]++;
    }
    printf("the frequencies are:\n");
    for (int i = 0; i < 256; i++)
    {
        if (freq[i]>0)
        {
            printf("'%c':%d\n",(char)i,freq[i]);
        }
        
    }
    return 0;
}