#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input >=10 && input <15 && input !=12)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
