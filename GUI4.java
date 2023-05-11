import java.awt.*;
import java.awt.event.*;


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

class MarvellousListener implements WindowListener
{
    public void WindowActivated(WindowEvent obj){}
    public void WindowDeiconified(WindowEvent obj){}
    public void WindowIconified(WindowEvent obj){}
    public void WindowClosed(WindowEvent obj){}
    public void WindowOpened(WindowEvent obj){}
    public void WindowDeactivated(WindowEvent obj){}
    public void WindowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}


class GUI4
{
    public static void main(String arg[])
    {
        Marvellousframe mobj = new Marvellousframe("PPA");
    }
}
