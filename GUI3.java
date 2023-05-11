import java.awt.*;

class GUI3
{
    public static void main(String arg[])
    {
        Marvellousframe mobj = new Marvellousframe("PPA");
    }
}

class Marvellousframe
{
    public Frame fobj;

    public Marvellousframe(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}