import java.io.*;
class writefile
{
    public static void main(String arg[]) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("infosystems.txt");
        String str = "india is my country";

        byte Arr[] = str.getBytes();
        fobj.write(Arr);
        fobj.close();
    }
}