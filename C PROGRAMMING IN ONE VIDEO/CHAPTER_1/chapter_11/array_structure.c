#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    // struct  employee facebook[10];
    // facebook[0].code=100;
    // facebook[0].salary=1000;
    // strcpy(facebook[0].name,"yash");

    // facebook[1].code=100;
    // facebook[1].salary=1000;
    // strcpy(facebook[1].name,"kamesh");
    struct employee facebook={12,34,"yash"};

    return 0;
}