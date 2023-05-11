import java.util.*;

class Input
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter 1 st number");
        int ino1 = sobj.nextInt();
        System.out.println("enter 2 st number");
        int ino2 = sobj.nextInt();

        int iAns=0;
        iAns = ino1+ino2;
        System.out.println("addition is "+iAns);
    }
}

/*

Data type               Method from scanner class

boolean                 nextBoolean();      //camel case
short                   nextShort();
