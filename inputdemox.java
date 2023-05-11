import java.io.*;

class inputdemo
{
    public static void main(String arg[])throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        int no1=0,no2=0;

        System.out.println("enter 1st no");
        no1 = Integer.parseInt(bobj.readLine());

        System.out.println("enter 2nd no");
        no2 = Integer.parseInt(bobj.readLine());
        
        int ans = no1+no2;
        System.out.println("addition is :"+ans);
    }
}