#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int i=0;i<T;i)
        {

            scanf("%d",&N);
            printf("case %d:",++i);
            for(int j=1;j<=

            N;j++)
            {
                if(N%j==0)
                {
                    printf(" %d",j);
                }
            }
            printf("\n");
        }

    return 0;
}
