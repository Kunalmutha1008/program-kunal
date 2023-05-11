class multi1
{
    public static void main(String arg[]) throws Exception
    {
        marvellous mobj1 = new marvellous();
        marvellous mobj2 = new marvellous();
    
        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);
    
        t1.start();
        t2.start();

        t1.join();
        t2.join();

        System.out.println("end of main thread");
    }
}
class marvellous extends Thread
{
    public void run()
    {
        try
        {
            for(int i=0;i<10;i++)
            {
                System.out.println(i);
                Thread.sleep(50);
            }
        }
        catch(Exception obj)
        {

        }
    }
}