#include <stdio.h>
int main ()
{
    int A,B,N,LCM;
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d",&A,&B);
    N=(A<=B)?B:A;
    if (N%A==0 && N%B==0)
    {
        LCM=N;
    }
    else 
    {
        while (N%A!=0 || N%B!=0)
        {
            N=N+1;
            LCM=N;
        }    
    }
    printf("\nThe LCM of %d and %d is: %d\n", A,B,LCM);
    return 0;
}