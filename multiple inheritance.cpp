#include<iostream>
using namespace std;
// parent class
class demo
{
    public:
        int a=11,b=21;
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
class hello        //class hello extends demo       is a syntax of java
{
    public:
        int x=51,y=101;
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
class ppa : public demo ,public hello 
{
    public:
        int i=111,j=121;
        ppa()
        {
            cout<<"inside ppa constructor"<<endl;
        }
        void sun()
        {
            cout<<"inside sun of ppa"<<endl;
        }
        ~ppa()
        {
            cout<<"destructor of ppa"<<endl;
        }
};
int main()
{
    //demo obj1;
    cout<<"inside main"<<endl;
    cout<<"size of demo :"<<sizeof(demo)<<endl;
    cout<<"size of hello :"<<sizeof(hello)<<endl;
    cout<<"size of ppa :"<<sizeof(ppa)<<endl;
    
    ppa obj3;
    
    obj3.fun();
    obj3.gun();
    obj3.sun();
    cout<<"size of obj2 is"<<sizeof(obj3)<<endl;

    cout<<obj3.a<<endl;
    cout<<obj3.b<<endl;
    cout<<obj3.x<<endl;
    cout<<obj3.y<<endl;
    cout<<obj3.i<<endl;
    cout<<obj3.j<<endl;
    cout<<"end of main"<<endl;
    return 0;
}