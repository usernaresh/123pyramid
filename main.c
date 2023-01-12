/*
Prints following pattern

1
12
123
1234
12345
*/

#include <stdio.h>

int main()
{
    int seed =0;
    int iteration =6;
    for(int i=1;i<iteration;i++){
        seed = ((seed*10) + i);
        printf("%d \n", seed);
    }
    
    return 0;
}
