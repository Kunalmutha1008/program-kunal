 
class stringdemo
{
    public static void main(String arg[])
    {
        //do not use this syntax
        char arr[] = {'h','e','l','o'};
        String str1 = new String(arr);
        //use below 2 syntax for creation of string
        
        String str2 = "hello";

        String str3 = new String("hello");
    
        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
    
        System.out.println(str1.length());
        System.out.println(str2.length());
        System.out.println(str3.length());
    }
}