#include <stdio.h>
#include<stdlib.h>
int random(int a){
    int i;
    int num=(rand()%(a+1));
    return num;
}
int function(int n){
    int i;
    if(n<=0){
        return 0;
    }
    else{
        i=random(n-1);
        printf("hello \n");
        printf("%d",i);
        return function(i)+function(n-1-i);

    }
}
int main()
{
    function(4);
    return 0;
}