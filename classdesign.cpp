#include<iostream>
using namespace std;

class marvellousarray
{
    private:
        int *arr;
        int isize;
    public:
        marvellousarray(int length)
        {
            cout<<"inside constructor"<<endl;
            isize = length;
            arr = new int[isize];
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
        int addition()
        {
            int isum=0;
            for(int i=0;i<isize;i++)
            {
                isum = isum+arr[i];
            }
            return isum;
        }
};
int main()
{
    marvellousarray mobj(7);
    marvellousarray mobj2(4);
    
    mobj.accept();
    mobj.display();
    
    mobj2.accept();
    mobj2.display();

    int iret=0;

    iret = mobj.addition();
    cout<<"addition of object 1"<<iret<<endl;

    iret = mobj2.addition();
    cout<<"addition of object 2"<<iret<<endl;
    
    return 0;
}