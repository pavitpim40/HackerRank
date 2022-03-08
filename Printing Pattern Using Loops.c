#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int row = 1;
    int col = 1;
    int m_row;
    
    while (row < 2*n)
    {   
        m_row = row;
        if (m_row > n)
            m_row = 2*n - row;
        if(col >= m_row && m_row + col <= 2*n)
            printf("%d ",n-m_row+1);
        else if (col < m_row)
            printf("%d ",n-col+1);
        else
            printf("%d ",col-n+1);
        col ++;
        if (col == 2*n){
            printf("\n");
            row +=1;
            col = 1;
        }
    }
      // Complete the code to print the pattern.
    return 0;
  	
}
