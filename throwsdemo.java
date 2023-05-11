class throwsdemo
{
    public static void main(String Arg[])
    {
        demo obj = new demo();
        float ret = 0.0f;
        
        try
        {
        ret = obj.division(11,0);
        }
        catch(ArithmeticException aobj)
        {
            System.out.println("exception occured..");
        }
        System.out.println(ret);
    }
}
class demo
{
    public float division(int no1,int no2)throws ArithmeticException
    {
        return no1/no2;
    }
}