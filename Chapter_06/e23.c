#include <stdio.h>
#include <stdlib.h>
#define N 20

void add(unsigned char *sum, unsigned char *a, unsigned char *b);
void mul(unsigned char *res, unsigned char *a, unsigned char *b);
void show(const char *s, unsigned char *a);
void stobn(const char *s, unsigned char *a);

int main()
{
    char a[N], b[N]; 
    char n1[] = "00000088099005798957";
    char n2[] = "00000000776988213577";
    char sum[N] = { 0 }, diff[N] = { 0 };

    // convert from string to big number
    // this method is better to enter big numbers
    stobn(n1, a);
    stobn(n2, b);

    // show big numbers
    show("Integer a..: ", a);
    show("Integer b..: ", b);
    
    // add and show 2 big numbers
    add(sum, a, b);
    show("Sum........: ", sum);


    return EXIT_SUCCESS;
}


// sum of big number
void add(unsigned char *sum, unsigned char *a, unsigned char *b)
{
    int carry = 0;
    
    for (int i = 0; i < N; ++i)
    {
        sum[i] = a[i] + b[i] + carry;
        if (sum[i] < 10)
        {
            carry = 0;
        } else
        {
            carry = sum[i] / 10;
            sum[i] %= 10;
        }
    }
}


// multiply a big number by a number of 1 digit
void mul(unsigned char *res, unsigned char *a, unsigned char *b)
{




// show big number
void show(const char *s, unsigned char *a)
{
    int i;
    
    // show title
    printf("%s", s);

    // skip leading zeroes
    for (i = N - 1; i > 0 && a[i] == 0; --i)
    {
        putchar(' ');
    }

    // print other digits
    for ( ; i >= 0; --i)
    {
         printf("%d", a[i]);
    }
    putchar('\n');
}


//
void stobn(const char *s, unsigned char *a)
{
    for (int i = 0; i < N; ++i)
    {
        a[N - i - 1] = s[i] - '0';
    }
}

