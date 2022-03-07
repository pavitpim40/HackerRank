#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int i = 1;
    int j = 2;
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    
    while (i <= n-1)
    {
        j = i + 1;
        while (j <= n)
        {
            if (((i&j) > max_and) && ((i&j) < k))
                max_and = i&j;
            if (((i|j) > max_or) && ((i|j) < k))
                max_or = i|j;
            if (((i^j) > max_xor) && ((i^j) < k))
                max_xor = i^j;
            j++;
        }
        i++;
    }
    printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}


// other Solution
void calculate_the_maximum(int n, int k) {
    printf("%d\n",((k-1)|k)<=n? (k-1):(k-2));
    printf("%d\n",((k-1)&(k-2))==0? (k==3?0:(k-2)) : (k-1) );
    printf("%d\n", k-1);
}
