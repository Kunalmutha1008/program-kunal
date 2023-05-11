class oop
{
    public static void main(String Arg[])
    {
        System.out.println("inside main function");

        arithematic obj1 = new arithematic();
        arithematic obj2 = new arithematic(11,10);

        int iret=0;

        iret = obj1.addition();     //0
        System.out.println("addition is : "+iret);

        iret = obj1.subtraction();     //0
        System.out.println("subtraction is : "+iret);

        iret = obj2.addition();     //21
        System.out.println("addition is : "+iret);

        iret = obj2.subtraction();     //1
        System.out.println("subtraction is : "+iret);

    }
}
class arithematic
{
    public int no1;
    public int no2;

    public arithematic()            //default constructor
    {
        System.out.println("inside default constructor");
        this.no1=0;
        this.no2=0;
    }
    public arithematic(int i,int j)     //parameterise constructor
    {
        System.out.println("inside parameterise constructor");
        this.no1=i;
        this.no2=j;
    }
    public int addition()
    {
        int ans=0;
        ans=this.no1+this.no2;
        return ans;
    }
    public int subtraction()
    {
        int ans=0;
        ans=this.no1-this.no2;
        return ans;
    }        
}