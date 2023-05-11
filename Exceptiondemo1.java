import java.util.Scanner;

class exceptiondemo
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int arr[] = new int[5];
        arr[0]  = 11;
        arr[1]  = 21;
        arr[2]  = 31;
        arr[3]  = 41;
        arr[4]  = 51;

        int index = 0;
        System.out.println("enter the index");
        index= sobj.nextInt();

        System.out.println("Data at specific index is  :"+arr[index]);

    }
}