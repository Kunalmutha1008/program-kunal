import java.awt.*;
import java.awt.event.*;

class GUI5
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
        fobj.addWindowListener(new MarvellousListener());
    }
}
class MarvellousListener extends WindowAdapter
{
    public void WindowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}


