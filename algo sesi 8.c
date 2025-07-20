#include <stdio.h>

int main() {
    float ipk;

    printf("Enter student's IPK: ");
    scanf("%f", &ipk);

    if(ipk >= 3.5 && ipk <= 4.0)
        printf("Grading: Cumlaude\n");
    else if(ipk >= 3.0 && ipk <= 3.4)
        printf("Grading: Outstanding\n");
    else if(ipk >= 2.5 && ipk <= 2.9)
        printf("Grading: Very Good\n");
    else if(ipk >= 2.0 && ipk <= 2.4)
        printf("Grading: Good\n");
    else if(ipk < 2.0)
        printf("Grading: Poor\n");
    else
        printf("Invalid IPK entered.\n");

    return 0;
}
