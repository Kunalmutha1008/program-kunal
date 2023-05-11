class finalizedemo
{
    public static void main(String arg[])
    {
        marvellous mobj1 = new marvellous();
        marvellous mobj2 = new marvellous(10,56);

        //call garbage collector explicitely
        mobj1 = null;
        mobj2 = null;
        //request for garbage collector
        System.gc();        
    }
}
class marvellous                            
{
    public int no1;
    public int no2;

    public marvellous()
    {
        no1=0;
        no2=0;
        System.out.println("inside dfault costructor");

    }   
    public marvellous(int a,int b)
    {
        no1= a;
        no2= b;
        
        System.out.println("inside parameterise costructor");
    }
    protected void finalize()
    {
        System.out.println("inside finalize method");
    }

}