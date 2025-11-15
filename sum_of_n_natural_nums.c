#include<stdio.h>
int main()
{

    int nums;
    int temp;
    int size;
    scanf("Enter the number of natural numbers: %s",size);
    for(nums=1;nums<=size;nums++)
    {
        printf("%3d\n",nums);
        temp=temp+nums;

    }
    printf("%3d",temp);
}