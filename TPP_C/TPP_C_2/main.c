#include <stdio.h>
#include <stdlib.h>



int* triA(int x){
    int* res;
    res = (int*) malloc(sizeof(int));
    *res = 3 * x;
    return res;
}
void mainA(){
    int a = 34;
    int a3;
    int* p;
    p = triA(a);
    a3 = *p;
    free(p);
}
////////////////////////////////////////////////
int triB(int x){
    int* res;
    res = (int*) malloc(sizeof(int));
    *res = 3 * x;
    return *res;
}
void mainB(){
    int a = 34;
    int a3;
    a3 = triB(a);
}
////////////////////////////////////////////////

void triC(int* x){
    int res;
    res = *x * 3;
    *x = res;
}
void mainC(){
    int* a;
    a = (int*)malloc(sizeof(int));
    *a = 34;
    triC(a);
}
///////////////////////////////////////////////



int main()
{
    //mainA();
    //mainB();
    mainC();



    return 0;
}
