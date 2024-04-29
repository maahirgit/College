import java.awt.event.*;
import javax.swing.*;
import java.awt.*;

public class A4{
    public static void main(String args[])
    {
        JFrame frame = new JFrame("Multiple Buttons");
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);

        JButton button1 = new JButton("Button 1");
        JButton button2 = new JButton("Button 2");
        JButton button3 = new JButton("Button 3");

        button1.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.out.println("Button 1 Clicked");
            }
        });

            button2.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.out.println("Button 2 Clicked");
            }
        });

            button3.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.out.println("Button 3 Clicked");
            }
        });

        frame.setLayout(new FlowLayout());
        frame.add(button1);
        frame.add(button2);
        frame.add(button3);
        frame.setSize(500,500);
        frame.setVisible(true);
    }
}