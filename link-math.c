// this program is to test linking the math library

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("hello world");          // libc / stdio.h

    // needed to create random number

    // create epoch time value and store it in t
    time_t t;

    // set the argument to the seed value which will be used by rand()
    srand((unsigned) time(&t));

    // create a pseudo randomm number
    int rNum = rand();

    double sr = sqrt(rNum);         // libm

    printf("square root of %d is %f\n", rNum, sr);

    return 0;
}
