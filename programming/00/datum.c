#include <stdio.h>

const int DAYS_IN_MONTH[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int GetDayPeriod(int day, int month)
{
    int period = 0;

    for (int i = 1; i < month; ++i)
        period += DAYS_IN_MONTH[i-1];
    period += day;

    return (period);
}

void PrintDay(int days)
{
    switch (days)
    {
        case 1:
            printf("Thursday");
            break;
        case 2:
            printf("Friday");
            break;
        case 3:
            printf("Saturday");
            break;
        case 4:
            printf("Sunday");
            break;
        case 5:
            printf("Monday");
            break;
        case 6:
            printf("Tuesday");
            break;
        case 0:
            printf("Wednesday");
            break;
    }
}

int main()
{
    int day, month;
    int period;

    scanf("%d %d", &day, &month);
    period = GetDayPeriod(day, month);
    PrintDay(period % 7);
    printf("\n");

    return (0);
}