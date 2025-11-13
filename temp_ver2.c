#include<stdio.h>
int main(){
    float fahr, celsius;
    float lower,upper,steps;
    lower=0;
    upper=300;
    steps=20;
    fahr=lower;
    printf("\tThe Temperature Table\n");
    while(fahr<=upper)
    {
        celsius=(5.0/9.0)*(fahr-32);
        printf("\t    %3.0f %6.1f\n",fahr,celsius);
        fahr=fahr+steps;
        /*This is the new updated version of this prg give acc values of temp in float*/
    }
}