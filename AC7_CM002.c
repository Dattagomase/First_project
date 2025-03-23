#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void CompressText(char *, int );
int main()
{
    char str[100];
    //int seen[100];
    printf("Enter the message as single string :");
    scanf(" %[^\n]s",str);
    int length = strlen(str);
    int count;
    puts(str);
    CompressText(str,length);  
    
    return 0;
}

void CompressText(char input[20],int length)
{
    //puts(input);
    //char count1;
    char count[100];
    for(int i=0; i<length; i++)
    {
        count[i]=0;
    }
    for(int i=0; i<length; i++)
    {
        char c= input[i];
        //count1=0;
        for(int j= 0; j<length; j++)
        {
            if(input[i]==input[j])
            {
                //count1++;
                count[i]++;
                
                //input[j] = '0';
            }
        }
    }
    for(int i=0; i<length; i++)
    {
        // for(int j=1; j<length; j++)
        // {

        // }
        if(input[i]!=input[i+1])
        {
            printf("%c%d",input[i],count[i]);
        }

    }


       

    // return 0;
}

