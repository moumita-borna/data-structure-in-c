#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter the array size = ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nWhich number you want to search x: ");
    scanf("%d",&x);

    int flag = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i]==x)
        {
            printf("%d is found at position no.%d\n",x,i+1);
            flag = 1;
            break;
        }

    }
    if(flag == 0){
        printf("%d is not found",x);
    }
}
