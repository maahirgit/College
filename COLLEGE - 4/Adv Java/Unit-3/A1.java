import javax.swing.*;

public class A1{
    public static void main(String args[]){
        JFrame frame = new JFrame("Welcome Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel label = new JLabel("Welcome to GLS UNIVERSITY");

        frame.getContentPane().add(label);
        frame.setSize(500,500);
        frame.setVisible(true);

    }
}