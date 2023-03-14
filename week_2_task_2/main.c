#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    printf("Please, enter the positive number, n = ");
    scanf("%d",&n);
    while(n < 0){
         printf("Please, enter the positive number again, n = ");
           scanf("%d",&n);
    }
    int i = 1;
    while(i*i*i<=n)
    {
        i++;
    }
    printf("%d\n", i-1);
    return 0;
}
