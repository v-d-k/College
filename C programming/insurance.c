#include <stdio.h>
#include <string.h>

int main() {
    char gender, marital_status;
    int age;

    printf("Choose your gender: (m)ale or (f)emale\n");
    scanf(" %c", &gender);

    if (gender == 'm') {
        printf("Choose your marital status: (m)arried or (u)nmarried\n");
        scanf(" %c", &marital_status);

        printf("Enter your age: ");
        scanf("%d", &age);

        if (marital_status == 'm' && age < 30) {
            printf("Not eligible for insurance.\n");
        } else if (marital_status == 'u' && age < 25) {
            printf("Not eligible for insurance.\n");
        } else {
            printf("Eligible for insurance.\n");
        }
    } else if (gender == 'f') {
        printf("Choose your marital status: (m)arried or (u)nmarried\n");
        scanf(" %c", &marital_status);

        printf("Enter your age: ");
        scanf("%d", &age);

        if (marital_status == 'm' && age > 22) {
            printf("Eligible for insurance.\n");
        } else if (marital_status == 'u' && age > 18) {
            printf("Eligible for insurance.\n");
        } else {
            printf("Not eligible for insurance.\n");
        }
    } else {
        printf("Invalid gender choice.\n");
    }

    return 0;
}