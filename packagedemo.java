import Marvellous.Arithematic;
import Marvellous.Math;
import Marvellous.ppa;

class packagedemo
{
    public static void main(String Arg[])
    {
        Arithematic aobj = new Arithematic();
        Math mobj = new Math();

        int iret = 0;
        iret = aobj.addition(10,21);
        System.out.println("Addition is :"+iret);

        
        iret = aobj.subtraction(10,21);
        System.out.println("Subtraction is :"+iret);


        iret = mobj.square(10);
        System.out.println("square is :"+iret);

        
        iret = mobj.cube(10);
        System.out.println("cube is :"+iret);
    }
}


//for execution write following command

// javac -cp . packagedemo.java
// java -cp . packagedemo,java