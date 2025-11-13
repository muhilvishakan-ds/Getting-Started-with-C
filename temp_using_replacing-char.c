#include <stdio.h>
int main()
#define LOWER 0
#define UPPER 300
#define STEPS 20
{
    int fahr;
    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEPS)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
}