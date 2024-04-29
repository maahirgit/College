import javax.swing.*;
import java.awt.event.*;

public class A2{
    public static void main(String args[]){
        JFrame frame = new JFrame("Close Button");
        frame .setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton cancel = new JButton("Cancel");
        cancel.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                System.out.println("Frame closed");
                frame.dispose();
            }
        });

        frame.getContentPane().add(cancel);
        frame.setSize(500,500);
        frame.setVisible(true);
    }
}