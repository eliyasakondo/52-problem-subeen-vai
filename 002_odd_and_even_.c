#include<stdio.h>
#include<string.h>
int main()
{
    int nth;
    char arr[100];
    scanf("%d",&nth);
    for(int i=0;i<nth;i++){
        scanf("%s",&arr);
        int len=strlen(arr);
            if((arr[len-1]%2)==0){
                printf("even");
            }
            else
                printf("odd");

    }
return 0;
}
