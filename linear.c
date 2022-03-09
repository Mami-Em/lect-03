#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    int numb[] = {1,4,3,5,6,2,0};

    for(int i = 0; i< sizeof(numb); i++) {
        if(numb[i] == 0) {
            printf("found %i at index %i\n",numb[i], i);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}