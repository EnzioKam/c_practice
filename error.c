#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno ;

int main () {

    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");

    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Error number: %d\n", errno);
        perror("Error message from by perror");
        fprintf(stderr, "Error message from strerror(errnum): %s\n", strerror(errnum));
    } 
    else {
        fclose (pf);
    }

    return 0;
}
