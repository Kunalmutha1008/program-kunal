#include<iostream>
using namespace std;

template<class T>
class marvellousarray
{
    private:
        T *arr;
        int isize;
    public:
        
        marvellousarray(int length)
        {
            cout<<"inside constructor"<<endl;
            isize = length;
            arr = new T[isize];
        }
        
        ~marvellousarray()
        {
            cout<<"inside destructor"<<endl;
            delete []arr;
        }
        
        void accept()
        {
            cout<<"enter the values "<<endl;
            for(int i=0;i<isize;i++)
            {
                cin>>arr[i];
            }
        }
         void display()
        {
            cout<<"elements of array are"<<endl;
            for(int i=0;i<isize;i++)
            {
                cout<<arr[i]<<"\t";
            }
            cout<<endl;
        }
        T addition()
        {
            T isum=0;
            for(int i=0;i<isize;i++)
            {
                isum = isum+arr[i];
            }
            return isum;
        }
};
int main()
{
    marvellousarray <int>mobj(7);
    marvellousarray <float>mobj2(4);
    
    mobj.accept();
    mobj.display();
    
    mobj2.accept();
    mobj2.display();

    int iret=0;
    float fret = 0.0f;

    iret = mobj.addition();
    cout<<"addition of object 1"<<iret<<endl;

    fret = mobj2.addition();
    cout<<"addition of object 2"<<fret<<endl;
    
    return 0;
}