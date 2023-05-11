import javax.swing.*;

class swingdemo
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
        JFrame fobj = new JFrame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}

/*
    Frame = JFrame
    Button = JButton
    TextField = JTextField
*/