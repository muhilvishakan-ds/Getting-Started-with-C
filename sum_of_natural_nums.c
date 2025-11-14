#include<stdio.h>
int main()
{
    int temp=0;
    int nums;
    for(nums=1;nums<=10;nums++)
    {
        printf("%d\n",nums);
        temp=temp+nums;
    }
     printf("The sum of natural nums are: %d ",temp);
}