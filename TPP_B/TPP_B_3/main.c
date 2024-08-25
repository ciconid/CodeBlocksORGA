#include <stdio.h>
#include <stdlib.h>

// LAS TRAZAS HACERLAS CON EL DEBUGGER

void a(){
double myVar = 123.4;
fa(myVar);
//checkpoint3
}
void fa(double formal){
//checkpoint1
formal = formal + 56.75;
//checkpoint2
}


void b(){
double myVar = 123.4;
fb(&myVar);
//checkpoint3
}
void fb(double* formal){
//checkpoint1
*formal = *formal + 56.75;
//checkpoint2
}


void c(){
double myVar = 123.4;
double* p;
p = &myVar;
fc(*p);
//checkpoint3
}
void fc(double formal){
//checkpoint1
formal = formal + 56.75;
//checkpoint2
}


void d(){
double myVar = 0;
myVar = 123.4;
double* p = 0;
p = &myVar;
fd(p);
//checkpoint3
}
void fd(double* formal){
//checkpoint1
*formal = *formal + 56.75;
//checkpoint2
}


void e(){
double myVar = 123.4;
double* p;
p = &myVar;
fe(&p);
//checkpoint4
}
void fe(double** formal){
//checkpoint1
**formal = **formal + 56.75;
*formal = NULL;
//checkpoint2
formal = NULL;
//checkpoint3
}

int main()
{
    a();
    b();
    c();
    d();
    e();




    return 0;
}
