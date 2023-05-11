class synchronize
{
    public static void main(String arg[])
    {
        marvellous mobj1 = new marvellous();
        marvellous mobj2 = new marvellous();
    
        Thread t1 = new Thread(mobj1);
        Thread t2 = new Thread(mobj2);
    
        t1.start();
        t2.start();
        System.out.println("end of main thread");
    }
}
class marvellous extends Thread
{
    public void run()
    {
        Dispaly();
    }
    synchronized public void Dispaly()
    {
        for(int i=1;i<10;i++)
        {
            System.out.println(i);
        }
    }
}