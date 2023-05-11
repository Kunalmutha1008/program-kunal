 
class stringdemo
{
    public static void main(String arg[])
    {
        String str1 = "hello";
        String str2 = new String("hello");
        if(str1 == str2)
        {
            System.out.println("strings are equal");
        }
        else
        {
            System.out.println("strings not are equal");    
        }

        if(str1.equals(str2))
        {
            System.out.println("strings are equal by using equal method");
        }
        else
        {
            System.out.println("strings not are equal");
        
        }
    }
}
