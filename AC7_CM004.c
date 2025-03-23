#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int findMgicQuadraplet(int *a,int num);
int main()
{
    int a[100];
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }
    findMgicQuadraplet(a,num);
    
    return 0;
}

int findMgicQuadraplet(int *a,int num)
{
    int arr[]={1,4,9,16,25,36,49,64,81,100,121,144,169,196};
    int i,j,l,m;
    for( i=0; i<num; i++)
    {
        for( j=i+1; j<num; j++)
        {
            for( l=j+1;l<num; l++)
            {
                for( m=l+1; m<num; m++)
                {
                    if(i!=j)
                    {
                        int first = a[i]*a[j];
                        int second = a[l]*a[m];
                        int third = first + second;
                        for(int k=0; k<num; k++)
                        {
                            if(49==third)
                            {

                               break;
                            }
                        }
                        
                    }
                }
            
            }
            
        }
    }
     printf("The magical quadraplet is %d %d %d %d\n",a[i],a[j],a[l],a[m]);
}