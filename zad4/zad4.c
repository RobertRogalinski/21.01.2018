#include <stdio.h>
#include <stdlib.h>


int nwd(int a, int b)
{
    int c;
    while(b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(void)
{
    int a, b;

    printf("wynik: ");
    scanf("%d %d", &a, &b);

    printf("wynik: %d\n", (a*b)/nwd(a,b));

    return 0;
}
