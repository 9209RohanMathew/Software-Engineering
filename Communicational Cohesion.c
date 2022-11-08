#include <stdio.h>
#include <math.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int i, int j)
{
    return i - j;
}

int main()
{
    int a, b, c, d;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    c = add(a, b);
    d = sub(a,b);
    printf("%d",c);
    printf("%d",d);

}
