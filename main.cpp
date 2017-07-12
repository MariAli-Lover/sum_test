#include <cstdio>

int sum(int n)
{
    int s = 0;
    for(int i = 1; i <= 100; i++)
        s += i;
    return s;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", sum(a));
    return 0;
}
