#include<iostream>
using namespace std;
// parent class
class demo
{
    public:
        int a,b;
        demo()
        {
            cout<<"inside demo constructor"<<endl;
        }
        void fun()
        {
            cout<<"inside fun of demo"<<endl;
        }
        ~demo()
        {
            cout<<"destructor of demo"<<endl;
        }
};
// child class
class hello : public demo       //class hello extends demo       is a syntax of java
{
    public:
        int x,y;
        hello()
        {
            cout<<"inside hello constructor"<<endl;
        }
        void gun()
        {
            cout<<"inside gun of hello"<<endl;
        }
        ~hello()
        {
            cout<<"destructor of hello"<<endl;
        }
};
int main()
{
    //demo obj1;
    hello obj2;
    obj2.fun();
    cout<<"size of obj2 is"<<sizeof(obj2)<<endl;

    return 0;
}