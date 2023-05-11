class AbstractDemo
{
    public static void main(String Arg[])
    {
        //RBI robj = new RBI();             we cannot create object of abstract class
        SBI sobj = new SBI();
        BOM bobj = new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fret = 0.0f;
        fret = sobj.calculateROI();
        System.out.println("ROI of sbi is "+fret);      //5.7

        fret = bobj.calculateROI();
        System.out.println("ROI of sbi is "+fret);      //7.7

    }
}
abstract class RBI
{
    public abstract float calculateROI();

    public void DisplayRules()
    {
        System.out.println("you have to submit adhar and PAN card ");
        System.out.println("minimum balance is 10000");
    }
}
class SBI extends RBI
{
    public float calculateROI()
    {
        return 5.7f;
    }
}
class BOM extends RBI
{
    public float calculateROI()
    {
        return 7.7f;
    }
    
}