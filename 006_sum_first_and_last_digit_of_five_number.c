#include<stdio.h>
int main(){
            int T,N,sum=0,lsd,msd;
            scanf("%d",&T);
            for(int i=0;i<T;i++){
                    sum=0;
                                    scanf("%d",&N);
                                    lsd=N%10;
                                    for(int j=0;j<N;j++){
                                        N=N/10;


                                    }
                                    msd=N;
                                    sum=lsd+msd;
                                    printf("sum = %d",sum);
                                    printf("\n");
            }



return 0;
}
