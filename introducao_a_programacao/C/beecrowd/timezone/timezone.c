#include <stdio.h>
int main()
{
    int S, T, Y, timezone;
    scanf("%d %d %d", &S, &T, &Y);
    timezone = S + T + Y;

    if (timezone >= 24)
    {
        timezone = timezone - 24;
        printf("%d\n", timezone);
    }
    else if (timezone < 0)
    {
        timezone = timezone + 24;
        printf("%d\n", timezone);
    }
    else
    {
        printf("%d\n", timezone);
    }

    return 0;
}