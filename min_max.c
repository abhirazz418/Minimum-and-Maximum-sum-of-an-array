//Name:- Abhay Kumar Modi


/*Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
  Then print the respective minimum and maximum values as a single line of two space-separated long integers.
  For example,arr=[1,3,5,7,9]. Our minimum sum is 1+3+5+7=16 and our maximum sum is 3+5+7+9=24.
  We would print 16 24. */


#include<stdio.h>
int main()
{
    int arr[100],i,j,t,s_min=0,s_max=0,n;
    printf("Enter the length of array:- ");
    scanf("%d",&n);
    printf("Enter the element of array:- \n");
    //we have sorted the array...
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        s_min=s_min+arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        s_max=s_max+arr[i];
    }
    printf("%d %d",s_min,s_max);
    return 0;
}
