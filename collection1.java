import java.util.*;

class collection1
{
    public static void main(String Arg[])
    {
        Hashtable<String , Integer> hobj = new Hashtable<String,Integer>();
        hobj.put("c program",990);
        hobj.put("c++ program",1200);
        hobj.put("java program",780);
        hobj.put("python program",1650);
        
        System.out.println("book price of java"+hobj.get("java programming"));
        hobj.remove("c++ programming");

        Enumeration eobj = hobj.keys();
        while(eboj.hasMoreElements())
        {
            System.out.println(eboj.nextElement());
        }
    }
}