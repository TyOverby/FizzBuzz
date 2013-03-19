#include <stdio.h>
#include <stdlib.h>

int itoa(int i, char* buff);


void fizzBuzz(int n){
    char buffer[100];

    int i;
    for(i = 1; i <= n; i++){
        if(i % 15 == 0){
            puts("FizzBuzz");
        }
        else if (i % 3 == 0){
            puts("Fizz");
        }
        else if (i % 5 == 0){
            puts("Buzz");
        }
        else{
            itoa(i, buffer);
            puts(buffer);
        }
    }
}

// Because we can't run this in a repl, this testing function will have to do.
int main(int argc, char* argv[]){
    if(argc > 1){
        fizzBuzz(atoi(argv[1]));
    }
}

// This function from https://code.google.com/p/my-itoa/
// return the length of result string. support only 10 radix for easy use and better performance
int itoa(int val, char* buf)
{
    const unsigned int radix = 10;

    char* p;
    unsigned int a;        //every digit
    int len;
    char* b;            //start of the digit char
    char temp;
    unsigned int u;

    p = buf;

    if (val < 0)
    {
        *p++ = '-';
        val = 0 - val;
    }
    u = (unsigned int)val;

    b = p;

    do
    {
        a = u % radix;
        u /= radix;

        *p++ = a + '0';

    } while (u > 0);

    len = (int)(p - buf);

    *p-- = 0;

    //swap
    do
    {
        temp = *p;
        *p = *b;
        *b = temp;
        --p;
        ++b;

    } while (b < p);

    return len;
}
