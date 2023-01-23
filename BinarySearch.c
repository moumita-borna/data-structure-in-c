#include<stdio.h>
int BinarySearch(int A[],int size,int k)
{
    int mid,left,right;
    left=0;
    right = size - 1;
    while(left <= right)
    {
        mid = (left + right)/2;

        if(A[mid] == k)
        {
            return mid;
        }
        if(A[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }


    }

    return -1;

}
int main()
{
    int t; // t is used for test cases no.
    printf("How many test cases :> ");
    scanf("%d",&t);
    for(int j = 1; j <= t; j++){
        printf("\n=========== CASE : %d ==========\n",j);
        int n;
        printf("Enter the array size n:");
        scanf("%d",&n);

        int a[n],x;
        printf("Enter %d elements of array in ascending order :",n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Which element do  you want to search x:");
        scanf("%d",&x);

        int position = BinarySearch(a, n, x);
        if(position != -1){
            printf("%d is found at position: %d\n",x, position + 1);
        }
        else{
            printf("%d is not found in your given array, Please try again\n",x);
        }

    }


}
