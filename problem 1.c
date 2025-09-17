#include <stdio.h>

int main() {
    int sub1, sub2, sub3, total;
    float percentage;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    percentage = (total / 300.0) * 100;
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
