import java.awt.*;
import java.awt.event.*;

class shorthand
{
    public static void main(String arg[])
    {
        Frame fobj = new Frame("Marvellous");
        fobj.setSize(500,500);
        fobj.setVisible(true);

        Button bobj = new Button("ok");
        fobj.add(bobj);

        //annonymous inner class
        bobj.addActionListener(new ActionListener(){

            public void actionPerformed(ActionEvent aobj)
            {
                System.out.println("button pressed");
            }
        });
    }
}