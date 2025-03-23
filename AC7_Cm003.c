#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int calculateTotalRewards(int , int);
bool expo(int n);
struct fitness{
    int min;
    int max;
}app;

int main()
{
    int reward[20];
    int number;
    printf("Enter number of user: ");
    scanf("%d",&number);

    struct fitness user[50];

    for(int i=0; i<number; i++)
    {
        printf("Enter the maximum steps and minimum steps : ");
        scanf("%d %d",&user[i].max, &user[i].min);
        reward[i]= calculateTotalRewards(user[i].min, user[i].max);
        printf("reward was %d\n",reward[i]);
    }
    
    
    return 0;
}

int calculateTotalRewards(int min, int max)
{
    
   
    int sum = 0;
    
    
    int diff = max - min;
    if(diff<5)
    {
        
        for(int i= min; i <= max; i++)
        {
            sum += i;
        }
        
    }
    else
    {
        sum =0;
        for(int i=min; i<=max; ++i)
        {
            
                if(i%2!=0)
                {
                    if(i%5==0)
                    {
                        sum = sum + (i*5);
                    }
                    if(i%7==0)
                    {
                        if(i>=(min*2))
                        {
                            sum = sum + (i*i);
                        } 
                        // else{
                        //     sum = sum + 7;
                        // }                      
                    }
                    if(i%5==0 && i%7==0)
                        {
                            sum = sum + 35;
                        }                    
                }
                else if(i%2==0)
                {
                    if(expo(i))
                    {
                        if(i<10){
                            sum = sum + (i*10);
                        }
                        
                    }
                    if(i%4==0 && i%8==0)
                    {                     
                        sum = sum + 32;                        
                    }
                }
        }
    }
            
    return sum;
}

bool expo(int n)
{
    return (ceil(log2(n))==floor(log2(n)));
}