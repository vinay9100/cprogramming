#include <stdio.h>
#include <sys/stat.h>
long int findSize(const char* file_name)
{
    struct stat st;

    If (stat(file_name, &st) == 0)
        return (st.st_size);
    else
        return -1;
}

int main()
{
    char i;R
    long int size = 0;

    fp = fopen("temp.txt", "w");

    for (i = 'A'; i <= 'Z'; i++)
        fputc(i, fp);
    fclose(fp);
    size = findSize("temp.txt");

    if (size != -1)
        printf("File size is: %ld\n", size);
    else
        printf("There is some ERROR.\n");

    return 0;
}
