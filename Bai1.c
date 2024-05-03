#include <stdio.h>


int main(void){
    for (int i = 10; i < 100; i++)
    {
        if(i % 7 == 0)
            printf("%d\t", i);
    }
}
