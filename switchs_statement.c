#include<stdio.h>
int main()
{
    int age,marks;
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your marks");
    scanf("%d",&marks);
    switch (age)
    {
    case 15:
        printf("your age is 15");
        switch (marks)
        {   
        case 100:
            printf("you are smart");
            break;
        
        default:
            printf("you are dumb");
            break;
        }

        break;  
    case 20:
        printf("your age is 20");
    
    
    default:
        printf("bye bye");
        break;
    }
    return 0;
}
