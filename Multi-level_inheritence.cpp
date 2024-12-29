#include<iostream>
using namespace std;
class A{
    public:
    int a=89;
};
class B:public A{
    public:
    int b=49;
};
class C:public B{
    public:
    int c=100;
} ;
int main(){
    C obj1;
    int d;
    d=obj1.a+obj1.b+obj1.c;
    cout<<d;
}