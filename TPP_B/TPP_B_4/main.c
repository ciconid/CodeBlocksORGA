#include <stdio.h>
#include <stdlib.h>

int* triaaa(int x){
int res;
res = 3 * x;
return &res;
}
void aaa(){
int a = 34;
int a3;
int* p;
p = triaaa(a);
a3 = *p;
}



int main()
{
    aaa();



    return 0;
}
