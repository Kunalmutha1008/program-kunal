import java.util.Scanner;

class Exceptiondemotry
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int no1 = 0 , no2 = 0;
        float ans = 0.0f;

        System.out.println("enter 1 st number");
        no1 = sobj.nextInt();
 
        System.out.println("enter 2 nd number");
        no2 = sobj.nextInt();

        try
        {
            ans=no1/no2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("exception occured & code is onside catch block : "+obj);
        }
        finally
        {
            System.out.println("code is finally block..");
            System.out.println("Division is : "+ans);
        }

    }
}