#include <stdio.h>
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a = 1, b = 5, c = 6, d = 2;
    int left_max = max(a, b);
    int right_max = max(c, d);
    int final_max = max(left_max, right_max);
    printf("Maximum number is: %d", final_max);
}