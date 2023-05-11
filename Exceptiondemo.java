import java.util.Scanner;

class exceptiondemo
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

        ans=no1/no2;

        System.out.println("Division is : "+ans);
    }
}