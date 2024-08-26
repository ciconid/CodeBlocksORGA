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


int* trib(int x){
int* res;
*res = 3 * x;
return res;
}
void b(){
int a = 34;
int a3;
int* p;
p = trib(a);
a3 = *p;
}


int tric(int x){
int res = 3 * x;
return res;
}
void c(){
int a = 34;
int a3;
a3 = tric(a);
}


void trid(int* x){
int res;
res = *x * 3;
*x = res;
}
void d(){
int a = 34;
trid(&a);
}


void trie(int* x){
int res;
res = *x * 3;
*x = res;
}
void e(){
int* a;
*a = 34;
trie(a);
}


void trif(int* x){
int res;
res = *x * 3;
*x = res;
}
void f(){
int* a;
int b;
a = &b;
*a = 34;
trif(a);
}



int main()
{
    //aaa();
    //b();
    //c();
    //d();
    //e();
    f();

    return 0;
}
