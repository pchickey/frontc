#include "localdef.h"
#include <stddef.h>
char buf[255] = "hello";
int i;
/* c style comment */
// line comment
/* Multi line c-style comment
 second line */

int main (void)
{
        // first item in body
        int x;
        // after int x
        printf("hello world %d\n", // inside printf
        3);
        // after printf
        return 0;
}
