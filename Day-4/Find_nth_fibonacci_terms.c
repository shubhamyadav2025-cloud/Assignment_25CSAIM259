#include <stdio.h>
int main()
 {
    int n, a = 0, b = 1, c;

    printf("Enter number");
    scanf("%d", &n);

    if (n == 1)
        printf("nth Fibonacci Term = %d", a);
    else if (n == 2)
        printf("nth Fibonacci Term = %d", b);
    else
     {
        for (int i = 3; i <= n; i++)
         {
            c = a + b;
            a = b;
            b = c;
        }
        printf("nth Fibonacci Term = %d", b);
    }

    return 0;
}