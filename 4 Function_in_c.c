#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int nbr[4] = {a,b,c,d};
    int max = a;
    int i = 0 ;

        while( i < 4)
        {
            if(nbr[i] > max)
             max = nbr[i];
            i++;
        }
     
    return (max);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
