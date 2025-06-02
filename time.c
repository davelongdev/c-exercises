// this program is to learn about the time library

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main(void) {

    // time_t is a special type from the time library
    time_t now = time(NULL);

    // number of secs since 1/1/70 mindnight (epoch time)
    printf("it's %ld in epoch time\n", now);

    sleep(2);

    time_t later = time(NULL);

    printf("it's now %ld in epoch time\n", later);

    double diff = difftime(later, now);

    printf("difference: %f\n", diff);

    char *now_string = ctime(&now);

    //remove '\n' from now_string which was placed there by ctime
    now_string[strlen(now_string) -1] = '\0';

    printf("it's %s in human time\n", now_string);
}
