#include <cstdio>

int sum(int n)
{
    return n * ( n + 1 ) / 2;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}
