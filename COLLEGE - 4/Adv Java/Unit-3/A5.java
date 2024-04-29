import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class A5{
    public static void main(String args[]){
        JFrame frame = new JFrame("Printing");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        ImageIcon icon = new ImageIcon("C:\\Users\\MAAHIR\\Downloads\\download.jpeg");

        JButton btn = new JButton(icon);

        btn.addActionListener(new ActionListener (){
            public void actionPerformed(ActionEvent e){
                System.out.println("Welcoe to java");
            }
        });

        frame.setLayout(new FlowLayout());
        frame.add(btn);
        frame.setSize(500,500);
        frame.setVisible(true);
    }
}