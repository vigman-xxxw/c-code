#include <stdio.h>
int main()
{
    int a = 7, b = 7, m = 1;
    switch (a % 3)
    {
    case 0: m++; break;
    case 1: m++;
        switch (b % 2)
        {
        default: m++;
        case 0: m++; break;
        }
    }
    printf("%d\n", m);
    return 0;
}
