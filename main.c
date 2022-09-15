#include <stdio.h>

int main() {
    
    int array[10][10];

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            array[i][j] = i*j;

            if(array[i][j] == 100)
            {
                printf("%d   ", array[i][j]);
            }
            else
            {
                if(array[i][j] < 10)
                {
                    printf("%d  ", array[i][j]);
                }
                if(array[i][j] >= 10)
                {
                    printf("%d ", array[i][j]);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}