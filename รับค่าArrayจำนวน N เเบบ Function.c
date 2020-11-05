#include <stdio.h>
#include <stdlib.h>
demo(int *a);
    for(int i =0;i<10;i++){
        printf("%d ",a[i]);
    }


int main()
{
    int n;

    printf("Input Arry[n] : ");
    scanf("%d",&n);
    int *arr[n];
    for(int i = 1; i<=n; i++)
    {
        printf("n[%d]: ",i);
        scanf(" %d",&arr[i]);

    }
    demo(arr);

    return 0;


}
