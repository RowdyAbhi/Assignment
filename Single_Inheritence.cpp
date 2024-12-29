#include<iostream>
using namespace std;
class A{
    public:
    int a=99;
};
class B:public A{
    public:
    int b=89;
};
int main(){
    int c;
    B obj1;
    c=obj1.a+obj1.b;
    cout<<c;
}