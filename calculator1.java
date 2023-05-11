import java.awt.*;
import java.awt.event.*;

class calculator
{
    public static void main(String arg[])
    {
        MarvellousCalculator mobj =new MarvellousCalculator(400,400,"marvellous");
    }
}
class MarvellousCalculator extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;
    public Integer no1,no2;

    public MarvellousCalculator(int width,int height, String title)
    {
        fobj = new Frame(title);
        fobj.setSize(width,height);
        
        fobj.addWindowListener(this);

        b1 = new Button("add");
        b2 = new Button("sub");
        b3 = new Button("multi");
        b4 = new Button("div");

        t1 = new TextField();
        t2 = new TextField();


        b1.setBounds(10,280,80,40);        // x,y,w,h
        b2.setBounds(100,280,80,40);        // x,y,w,h
        b3.setBounds(190,280,80,40);        // x,y,w,h
        b4.setBounds(290,280,80,40);        // x,y,w,h

        t1.setBounds(70,100,100,40);        // x,y,w,h
        t2.setBounds(220,100,100,40);        // x,y,w,h


        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);

        fobj.add(t1);
        fobj.add(t2);        
    
        lobj = new Label();
        lobj.setBounds(150,25,200,100);
        fobj.add(lobj);

        b1.addActionListener(this);     //call actionPerformed
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        fobj.setLayout(null);
        fobj.setVisible(true);
    }
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)   //event handler  for button
    {
        try
        {
            no1 = Integer.parseInt(t1.getText());
            no2 = Integer.parseInt(t2.getText());

            if(aobj.getSource()== b1)   //add
            {
                lobj.setText("addition is : "+(no1+no2));
               // System.out.println("inside addition");
            }
            else if(aobj.getSource()== b2)   //sub
            {
                lobj.setText("subtraction is : "+(no1-no2));
            }
            else if(aobj.getSource()== b3)   //multi
            {
                lobj.setText("multiplication is : "+(no1*no2));
            }
            else if(aobj.getSource()== b4)   //add
            {
                lobj.setText("division is : "+(no1/no2));
            }
        }
        catch(Exception eobj)       //generic catch
        { 

        }
    }
}