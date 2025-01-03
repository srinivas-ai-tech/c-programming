#include <stdio.h>
void main()
{
    int p,q;
    for(p=5;p>=1;p--)
    {
        for(q=1;q<=p;q++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
