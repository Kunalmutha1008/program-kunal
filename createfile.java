import java.io.*;
class createfile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("infosystems.txt");

        if(fobj.createNewFile())
        {
            System.out.println("file is created successfully");
        }
        else
        {
            System.out.println("unable to create file");
        }
    }
}