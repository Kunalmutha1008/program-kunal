import java.io.*;
class readfile
{
    public static void main(String arg[]) throws Exception
    {
        FileInputStream fobj = new FileInputStream("infosystems.txt");
        int i=0;
        while((i=fobj.read())!=-1)
        {
            System.out.print((char)i);
        }
        fobj.close();
    }
}