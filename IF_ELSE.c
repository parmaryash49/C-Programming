#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if (age>18)
    {
        printf("you can voteeeee ..");
    }
    else if (age<15)
    {
        printf("hello");
    }
    
    else{
        printf("you can not vote");
    }
    
    
    return 0;
}
