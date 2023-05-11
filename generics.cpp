#include<iostream>
using namespace std;

int additionI(int i,int j)
{
    int result;
    result = i+j;
    return result;
}

float additionF(float i,float j)
{
    float result;
    result = i+j;
    return result;
}

double additionD(double i,double j)
{
    double result;
    result = i+j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;

    i=additionI(10,11);
    cout<<i<<endl;
    f=additionF(10.5f,641.2f);
    cout<<f<<endl;
    d=additionD(51.15665,541.1565);
    cout<<d<<endl;

    return 0;
}