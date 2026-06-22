#include <stdio.h>
int main()
 {
    int n, i, key, count = 0;

    printf("Enter size");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element");
    scanf("%d", &key);

    for(i = 0; i < n; i++) 
    {
        if(a[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}