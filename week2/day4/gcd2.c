#include <stdio.h>
int xc_gcd(int a,int b)
{
    int c;
    c=a%b;
    while( c!=0 )
    {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}
int xj_gcd(int a,int b)
{
    while( a!=b )
    {
        if ( a>b )
            a-=b;
        else
            b-=a;
    }
    return b;
}
int qj_gcd(int a,int b)
{
    int i;
    i=(a>b)?a:b;
    while( a%i!=0 && b%i!=0 )
        i--;
    return i;
}
void main()
{
    int a,b;
    scanf("%d%d",&a ,&b);
    printf("a=%d b=%d\n", a, b );
    printf("辗转相除法求最大公约数=%d\n", xc_gcd(a,b) );
    printf("相减法求最大公约数=%d\n", xj_gcd(a,b) );
    printf("穷举法求最大公约数=%d\n", qj_gcd(a,b) );
}
