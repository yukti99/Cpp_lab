// Q130. Four-digit Perfect squares
#include <stdio.h>
int is_perfectsq(int n) ;
int main()
{   
    int n , i , r ,q , a, b, c ;
    for(i=1000 ; i<=9999 ; i++)
    {
        r = i % 100 ;
        q = i / 100 ;
        a = is_perfectsq(q) ;
        b = is_perfectsq(r) ;
        c = is_perfectsq(i) ;
        if (a && b && c)
            printf("%d ", i) ;
    }
    return 0;
}
int is_perfectsq(int n)
{
    int i ;
    for(i=0 ; i<=n ; i++)
    {
        if (n == i*i)
            return 1 ;
    }
    return 0 ;
}


