#include <stdio.h>
    /**
     * main - entry point
     *
     * Discription: reverse
     * Return: 0
     */
    int main(void)
    {
            int ch;
            int a =0;
            int b;
            int c;
            int d;
    
            while(a < 9)
            {
                    b = 0;
                    while (b < 9)
                    {
                            if(b ==a)
                            {
                                    continue;
                            }
                            c =a;
                            ch = 0;
                            while (c < 9)
                            {
                                    d = b;
                                    while (d < 9)
                                    {
                                            if ((a == d) && (b == c))
                                            {
                                                    ch = ch + 1;
                                                    break;
                                            }
                                            d++;
                                    }
                                    if (ch == 1)
                                    {
                                            break;
                                    }
                                    c++;
                            }
                            if ( ch == 1)
                            {
                                    putchar(a + '0');
                                    putchar(b + '0');
                            }
    
                            if ((a != 8) && (b != 9))
                            {
                                    putchar(',');
                                    putchar(' ');
                            }
                            b++;
                    }
                    a++;
            }
	    return (0);
        }
