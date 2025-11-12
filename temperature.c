#include<stdio.h> /*well idk anything about temperature*/
int main()
{
  int fahr, celsius;
  int lower,upper,steps;
  lower=0;
  upper=300;
  steps=20;
  fahr=lower;
  while(fahr<=upper)
	{
         celsius=5*(fahr-32)/9;
         printf("%d\t%d\n",fahr,celsius);/*i was just following the book*/
	 fahr=fahr+steps;
	}
 }
 