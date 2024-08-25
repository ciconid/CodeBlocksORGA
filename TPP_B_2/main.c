#include <stdio.h>
#include <stdlib.h>

void a(){
    printf("--- A --- \n");
    int* x;
    int y, z = 3;
    x = &z;
    y = *x;
    //checkpoint 1
    printf("Checkpoint 1 \n");
    printf("x: %i   y: %i   z: %i \n",x,y,z);
    y++;
    //checkpoint 2
    printf("Checkpoint 2 \n");
    printf("x: %i   y: %i   z: %i \n",x,y,z);
    (*x) ++;
    //checkpoint 3
    printf("Checkpoint 3 \n");
    printf("x: %i   y: %i   z: %i \n",x,y,z);
}

void b(){
    printf("--- B --- \n");
    int* x;
    int y;
    x = &y;
    *x = 3;
    //checkpoint 1
    printf("Checkpoint 1 \n");
    printf("x: %i   y: %i \n",x,y);
    y++;
    //checkpoint 2
    printf("Checkpoint 2 \n");
    printf("x: %i   y: %i \n",x,y);
    (*x) ++;
    //checkpoint 3
    printf("Checkpoint 3 \n");
    printf("x: %i   y: %i \n",x,y);
}


int main()
{
    a();
    printf("\n");
    b();

    return 0;
}
