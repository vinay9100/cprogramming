#include <stdio.h>
int main()
{

    char str[50];

    printf("Enter the Word: ");

    scanf("%s\n", str);

    printf("\nEntered Word is: %s";

    printf("\n\nEnter the Sentence: ");

    scanf("%[^\n]\ns", str);

    printf("\nEntered Sentence is: %s", str);

  

    return 0;
}
