#include <stdio.h>
int n,m;
int ClearArray();
int main()
{
    scanf("%d %d",&n,&m);
    int Matrix[n][m+1];
    ClearArray(Matrix);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&Matrix[i][j]);
            Matrix[i][m] += Matrix[i][j];
        }
    }
    int MaxSumofRow=Matrix[0][m];
    int PrintOut=0;
    for(int i=0; i<n; i++)
    {
        if(MaxSumofRow<Matrix[i][m])
        {
            MaxSumofRow=Matrix[i][m];
            PrintOut=i;
        }
    }
    printf("Most row-value is row %d.\n",PrintOut+1);
    
    return 0;
}

int ClearArray(int arr[n][m+1])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m+1; j++)
        {
            arr[i][j] = 0;
        }
    }
    return arr[n][m+1];
}