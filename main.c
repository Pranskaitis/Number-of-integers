#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val[100]={0};
    int diff[100]={0};
    int num[100]={0};
    int i=0;
    int k=0;
    while(i<100 && scanf(" %2d",&val[i])==1)
    {
        int j=0;
        while(j<100)
        {
            if (diff[j]==0)
            {
                diff[j]=val[i];
                num[j]=1;
                goto end;
            }
            else if (val[i]==diff[j])
            {
                num[j]++;
                goto end;
            }
            j++;
        }
        end:
        i++;
    }
    while(k<100 && diff[k]>0)
    {
        printf("Number %d occurs %d number of times \n", diff[k], num[k]);
        k++;
    }
    return 0;
}
