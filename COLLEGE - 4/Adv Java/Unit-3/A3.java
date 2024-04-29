import java.awt.event.*;
import javax.swing.*;

public class A3{
    public static void main(String args[]){
        JFrame frame = new JFrame("Terminal Print");
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);

        JButton click = new JButton("Click Me");

        click.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.out.println("Welcome to java");
            }
        });

        frame.getContentPane().add(click);
        frame.setSize(500,500);
        frame.setVisible(true);
    }
}