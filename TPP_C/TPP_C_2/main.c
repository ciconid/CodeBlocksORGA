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






int main()
{
    //mainA();
    //mainB();




    return 0;
}
