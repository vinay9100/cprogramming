#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Please enter the 1st number or 0 to stop: ");
    scanf("%d", &number);

    int count = 0;

    while (number != 0)
    {
        sum = sum + number;
        count++;
        printf("Please enter another number or 0 to stop: ");
        scanf("%d", &number);
    }
        
    if  (count < 0) {
        printf("Only positive numbers\n");
    }
                    
    if (count > 0)
    {
        printf("AVERAGE = %f", ((float)sum) / count);
    }

} 
