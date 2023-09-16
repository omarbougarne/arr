#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i;
    for (i = 0; i<10; i++){
        arr[i] = i+1;
    }
    for(i = 0; i<10; i++){
        printf("%d, \t", arr[i]);
    }
    return 0;
}
