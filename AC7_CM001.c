#include<stdio.h>
#include<math.h>

float addFractionalPart(int);

int main()
{
    int num,l=0;
    static float sum =0;
    
        printf("Enter the number: ");
        scanf("%d",&num);
        l++;
        if(num<=0 && l==1)
        {
                printf("Try again, please enter positive number\n");   
                l++;
        }
        else if(num<=1 && l==2)
            {
                return 0;
            }
        else 
        {
            for(int i=1;i<=num;i++)
            {
                sum = sum + addFractionalPart(i);   // addFrcationalPart is returning the float value
            }
        }
            printf("%0.3f\n",sum);
    
}

float addFractionalPart(int a)
{
    float ret = sqrt(a);
    int decimal = sqrt(a);

    return ret - decimal;
}