
#include<stdio.h>
int main()
{
    int ar[30],n,s,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for ( i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("Enter the number to be searched for :");
    scanf("%d",&s);
    printf("The given array is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",ar[i]);
    for( i=0;i<=n;i++)
    {
        if(ar[i]==s)
        {
            printf("The element %d is present in the array and its index is: %d",s,i);
            break;
        }
        else if(i==n)
            printf("The element is not present in the array.");
    }
    return 0;
}
