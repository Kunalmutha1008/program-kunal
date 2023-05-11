
class Super 
{
    public static void main(String Arg[])
    {
        // Base bobj = new Base();             // no casting
        // Base boj2 = new Derived();           //upcasting
        // Derived  dobj2 = new Base();
        
        Derived dobj = new Derived();          // no casting

        dobj.gun();
/*
        System.out.println(dobj.a);
        System.out.println(dobj.x);
  */
    }
}
class Base
{
    public int a;
    public Base()
    {
        System.out.println("inside base default constructor");

        this.a = 11;
    }
    public Base(int i)
    {
        System.out.println("inside base parameterise constructor");

        this.a = i;
    }
    public void fun()
    {
        System.out.println("inside base fun");
    }
}
class Derived extends Base          //class Derived :: public Base
{
    public int x;
    public Derived ()
    {
        super(11);                                          //3
        System.out.println("inside derived constructor");
        this.x = 51;
    }
    public void gun()
    {
        System.out.println("inside base gun");
        System.out.println("value of A "+super.a);          //1 
        super.fun();                                        
        //2

    }
}


// using super keyword uses
// 1. Access data of parent from child
// 2. call mrethod of parent from child
// 3.. call constructor of parent
