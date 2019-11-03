#include <stdio.h>
int FindMax();
int FindMin();

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int Number[n];
    for(int i=0; i<n ; i++)
    {
        scanf("%d",&Number[i]);
    }
    int max = FindMax(Number,n);
    int min = FindMin(Number,n);
    printf("Missing number(s) : ");
    for(int i=min; i<=max; i++)
    {
        count=0;
        for(int j=0; j<n; j++)
        {
            if(i==Number[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

int FindMax(int Number[],int n)
{
    int max = Number[0];
    for(int i=0; i<n; i++)
    {
        if(max<Number[i])
        {
            max = Number[i];
        }
    }
    return max;
}
int FindMin(int Number[],int n)
{
    int min = Number[0];
    for(int i=0; i<n; i++)
    {
        if(min>Number[i])
        {
            min = Number[i];
        }
    }
    return min;
}