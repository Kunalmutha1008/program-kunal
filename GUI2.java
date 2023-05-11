import java.awt.*;

class GUI2
{
    public static void main(String arg[])
    {
        Marvellousframe mobj = new Marvellousframe("PPA");
    }
}

class Marvellousframe
{
    public Marvellousframe(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}