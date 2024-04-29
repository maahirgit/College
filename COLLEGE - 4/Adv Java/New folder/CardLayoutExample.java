import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class CardLayoutExample {
    public static void main(String[] args) {
        // Create a frame
        JFrame frame = new JFrame("CardLayout Example");

        // Create a panel with CardLayout
        JPanel cardPanel = new JPanel(new CardLayout());

        // Create buttons to switch between cards
        JButton nextButton = new JButton("Next");
        JButton prevButton = new JButton("Previous");

        // Create cards
        JPanel card1 = new JPanel();
        card1.add(new JLabel("Card 1"));
        JPanel card2 = new JPanel();
        card2.add(new JLabel("Card 2"));
        JPanel card3 = new JPanel();
        card3.add(new JLabel("Card 3"));

        // Add cards to the panel with unique names
        cardPanel.add(card1, "card1");
        cardPanel.add(card2, "card2");
        cardPanel.add(card3, "card3");

        // Set action listeners for buttons
        nextButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                CardLayout cardLayout = (CardLayout) cardPanel.getLayout();
                cardLayout.next(cardPanel);
            }
        });

        prevButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                CardLayout cardLayout = (CardLayout) cardPanel.getLayout();
                cardLayout.previous(cardPanel);
            }
        });

        // Create a panel for buttons
        JPanel buttonPanel = new JPanel(new FlowLayout());
        buttonPanel.add(prevButton);
        buttonPanel.add(nextButton);

        // Add panels to the frame
        frame.add(cardPanel, BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        // Set frame size and visibility
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}




public class CardLayoutExample{
    public static void main (String args[]){
        JFrame frame = new JFrame();

        JPanel cardPanel = new JPanel(new CardLayout());


        JButton nxtbtn = new JButton("Next");
        JButton pvbtn = new JButton("Previous");


        JPanel card1 = new JPanel();
        card1.add(new JLabel("Card 1"));
         JPanel card2 = new JPanel();
        card2.add(new JLabel("Card 2"));
        JPanel card3 = new JPanel();
        card3.add(new JLabel("Card 3"));

        cardPanel.add(card1,"Card 1");
        cardPanel.add(card2,"Card 2");
        cardPanel.add(card3,"Card 3");

        nxtbtn.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent e){
                CardLayout cl = (CardLayout) cardPanel.getLayout();
                cl.next(cardPanel);
            }
        });

        pvbtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                CardLayout cardLayout = (CardLayout) cardPanel.getLayout();
                cardLayout.previous(cardPanel);
            }
        });

        JPanel buttonpanel = new JPanel(new FlowLayout());
        buttonpanel.add(pvbtn);
        buttonpanel.add(nxtbtn);

        frame.add(cardPanel);
        frame.add(buttonpanel);

        frame.setSize(500,500);
        frame.setVisible(true);
    }
}