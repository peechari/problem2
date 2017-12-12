#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define SEED 35791246

main(int argc, char* argv)
{
    int niter=0;
    long a,b;
    int i,count=0; /* # of points in the 1st quadrant of unit circle */
    long c;
    long pi;

    printf("Enter the number of iterations used to estimate pi: ");
    scanf("%d",&niter);

    /* initialize random numbers */
    srand(SEED);
    count=0;
    for ( i=0; i<niter; i++) {
        a = (long)rand()/RAND_MAX;
        b = (long)rand()/RAND_MAX;
        c = a*a+b*b;
        if (c<=1) count++;
    }
    pi=(long)count/niter*4;
    printf("# of trials= %d , estimate of pi is %g \n",niter,pi);
}

