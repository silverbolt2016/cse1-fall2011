/*
Source: http://www.cs.cornell.edu/~tomf/notes/cps104/twoscomp.html
Conversion to Two's Complement

Note that this works both ways. If you have -30, and want to represent it in 2's complement, you take the binary representation of 30:

0000 0000 0000 0000 0000 0000 0001 1110

Invert the digits.

1111 1111 1111 1111 1111 1111 1110 0001

And add one.

1111 1111 1111 1111 1111 1111 1110 0010

Converted back into hex, this is 0xFFFFFFE2. And indeed, suppose you have this code:

#include <stdio.h>

int main() {
    int myInt;
    myInt = 0xFFFFFFE2;
    printf("%d\n",myInt);

    return 0;
}

That should yield an output of -30. Try it out if you like.
*/


#include <stdio.h>

int main() {
    int myInt;
    myInt = 0xFFFFFFE2;
    printf("%d\n",myInt);

    return 0;
}
