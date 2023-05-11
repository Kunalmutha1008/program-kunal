import java.util.*;

class userdefine
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("enter your age:");
            int age = sobj.nextInt();
            if(age<18)
            {
                throw new ageinvalid("age is less than 18");
            }
        }            
        catch(ageinvalid obj)
        {
            System.out.println(obj);
        }
        finally
        {
            
        }
    }
}
class ageinvalid extends Exception
{
    public ageinvalid(String str)
    {
        super(str);
    }

}