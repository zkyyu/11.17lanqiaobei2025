#include <stdio.h>

int get_sum(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int cnt = 0;
    int i;
    for (i = 1; i <= 202504; i++)
    {
        if (get_sum(i) % 5 == 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
 
