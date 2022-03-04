#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char    str[1001];
    int     i = 0;
    int     result[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s", str);
    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
            result[str[i] - 48] += 1;
        i++;
    }
    i = 0;
    while (i < 10)
    {
        printf("%d",result[i]);
         if(i < 9)
          printf(" ");
        i++;
    }
    return 0;
}
