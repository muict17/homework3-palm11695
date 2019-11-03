#include <stdio.h>
void Swap();
void PrintRow();
void Permute();

int main()
{
    int n;
    printf("Input : \n");
    scanf("%d",&n);
    int Start = 0;
    int Set[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&Set[i]);
    }
    printf("Output : \n");
    Permute(Set,Start,n);
    return 0;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void PrintRow(int Set[],int Length)
{
    for(int i=0; i<Length; i++)
    {
        printf("%d ",Set[i]);
    }
    printf("\n");
}
void Permute(int Set[], int Start, int Length)
{
    if(Start==Length)
    {
        PrintRow(Set,Length);
    }
    else
    {
        for(int i=Start; i<Length; i++)
        {
            Swap(Set+Start,Set+i);
            Permute(Set,Start+1,Length);
            Swap(Set+Start,Set+i);
        }
    }
    
}