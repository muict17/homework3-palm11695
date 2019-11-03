#include <stdio.h>
int main()
{
    int n,check=0;
    scanf("%d",&n);
    char Paren[n];
    for(int i=0; i<n; i++)
    {
        scanf(" %c",&Paren[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(Paren[i]=='(')
        {
            check++;
        }
        else
        {
            check--;
        }
        if(check<0)
        {
            break;
        }
    }
    if(check==0)
    {
        printf("Correct\n");
    }
    else
    {
        printf("Incorrect\n");
    }
    return 0;
}