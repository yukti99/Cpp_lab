// Q131. Four-digit Perfect squares- AABB
#include <stdio.h>
int is_perfectsq(int n) ;
int main()
{   
    int n,i,r,q,c,r1,r2,q1,q2 ;
    for(i=1000 ; i<=9999 ; i++)
    {
        r = i % 100 ;
        r1 = r % 10 ;
        r2 = r / 10 ;
        q = i / 100 ;
        q1 = q % 10 ;
        q2 = q / 10 ;
        c = is_perfectsq(i) ;
        if (c && r1 == r2 && q1 == q2 && r != q )
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

