#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "The best of both worlds";  
    int count = 0;  
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] != ' ')  
            count++;  
    }    
    printf("Total number of characters in a string: %d", count);  
   
    return 0;  
}  
