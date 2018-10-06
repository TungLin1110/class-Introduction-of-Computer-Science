#include <stdio.h>
int main ()
{
    char arr[10]={"apple\n"};
    printf("%s",arr);
    function1(arr);
    return 0;
}
int function1(char *arr[])
{

    printf("function2:");
    printf("%s",arr);
    return 0;
}