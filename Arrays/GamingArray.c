#include <stdio.h>
typedef unsigned u;
int main()
{
    u t, n, p, a, r;
    for (scanf("%u", &t); t--; printf(r ? "BOB\n" : "ANDY\n"))
        for (scanf("%u", &n), p = r = 0; n--;)
        {
            scanf("%u", &a);
            if (a > p)
            {
                p = a;
                r ^= 1;
            }
        }
    return 0;
}