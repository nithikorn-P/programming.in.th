#include <stdio.h>

int main()
{
    int work_score, midterm_score, final_score;
    int total_score;

    scanf("%d %d %d", &work_score, &midterm_score, &final_score);
    total_score = work_score + midterm_score + final_score;
    if ((total_score >= 80) && (total_score <= 100))
        printf("A");
    else if ((total_score >= 75) && (total_score <= 79))
        printf("B+");
    else if ((total_score >= 70) && (total_score <= 74))
        printf("B");
    else if ((total_score >= 65) && (total_score <= 69))
        printf("C+");
    else if ((total_score >= 60) && (total_score <= 64))
        printf("C");
    else if ((total_score >= 55) && (total_score <= 59))
        printf("D+");
    else if ((total_score >= 50) && (total_score <= 54))
        printf("D");
    else if ((total_score >= 0) && (total_score <= 49))
        printf("F");
    
    return (0);
}