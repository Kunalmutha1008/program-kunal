#include<iostream>
using namespace std;

template<class T>
T addition(T i,T j)
{
    T result;
    result = i+j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;
    i=addition(10,11);
    cout<<i<<endl;
    f=addition(10.5f,641.2f);
    cout<<f<<endl;
    d=addition(51.15665,541.1565);
    cout<<d<<endl;

    return 0;
}