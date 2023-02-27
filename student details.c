#include <stdio.h>
 
struct student{
    char    name[30];
    int     roll;
    int   marks;
};

int main()
{
    struct student  std;       
    struct student  *ptr;      
     
    ptr= &std;  
{
	int std;
 printf("Enter details of student: ");
    printf("\nName:");        gets(ptr->name);
    printf("Roll No:");       scanf("%d",&ptr->roll);
    printf("marks:");    scanf("%d",&ptr->marks);
     
    printf("\nEntered details: ");
     printf("\nName:%s \nRollNo: %d \nmarks: %d\n",ptr->name,ptr->roll,ptr->marks);

	
return 0;
}
}
