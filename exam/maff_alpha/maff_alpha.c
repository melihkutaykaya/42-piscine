// Assignment name  : maff_alpha
// Expected files   : maff_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the alphabet, with even letters in uppercase, and
// odd letters in lowercase, followed by a newline.

// Example:

// $> ./maff_alpha | cat -e
// aBcDeFgHiJkLmNoPqRsTuVwXyZ$

#include <unistd.h>

int main(int argc, char *argv[])
{
    char let;
    char a;

    let = 'a';
    while (let != 123)
    {
        if (let % 2 != 0)
        {
            write(1,&let,1);
        }
        else
        {
            a = let - 32;
            write(1,&a,1);
        }
        let++;
    }
    write(1,"\n",1);
    return 0;
}
