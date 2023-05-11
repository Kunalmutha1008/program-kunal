class multi1
{
    public static void main(String arg[])
    {
        marvellous mobj1 = new marvellous();
        marvellous mobj2 = new marvellous();
    
        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);
    
        t1.start();
        t2.start();
    }
}
class marvellous implements Runnable
{
    public void run()
    {
        for(int i=0;i<1000;i++)
        {
            System.out.println(i);
        }
    }
}