class finalmethod
{
    public static void main(String Arg[])
    {
       Base bobj = new Derived();
       bobj fun();
       bobj gun();
    }
}
class Base
{
    public void fun()
    {
        System.out.println("base fun");
    }
    final public void gun()
    {
        System.out.println("base gun");
    }
}
class Derived extends Base
{
    
    public void fun()
    {
        System.out.println("Derived fun");
    }
    /*public void gun()
    {
        System.out.println("Derived gun");
    }*/
}