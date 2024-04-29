import java.awt.*; 
import java.awt.event.*; 
import javax.swing.*;
class demo extends JFrame implements ItemListener, ActionListener
 { 
  JComboBox c1;
JLabel l1,l2;
	JTextField t1;
	JButton b1,b2,b3;
demo() 
	{ 
           setTitle("ComboBox"); 
           setLayout(new FlowLayout()); 
           setSize(400,400); 
           setVisible(true); 
	   c1=new JComboBox();
		c1.addItem("Jan");
		c1.addItem("Feb");
		c1.addItem("March");
		c1.addItem("April");
	String s[]={"May","June","July"};
	for(int i=0;i<s.length;i++)
	{
		c1.addItem(s[i]);
	}
	System.out.println(c1.isEditable());
	c1. setEditable(true);
	l1=new JLabel();
	l2=new JLabel("Item is:");
	t1=new JTextField(10);
	b1=new JButton("Remove Index");
	b2=new JButton("Remove All");
	b3=new JButton("Remove Item");
	b1.addActionListener(this);
	b2.addActionListener(this);	
	b3.addActionListener(this);
	c1.addItemListener(this);
		add(c1);
		add(l1);
		add(t1);
		add(b1);
		add(b2);
		add(b3);
		add(l2);
         } 
	public void itemStateChanged(ItemEvent ae)
	{
		l1.setText(String.valueOf(c1.getSelectedIndex()) + " " + c1.getSelectedItem());
	}
	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource()==b1)
		{
		int no=Integer.parseInt(t1.getText());
		//l2.setText(c1.getItemAt(no).toString());
		//System.out.println(c1.getItemCount());	
		c1.removeItemAt(no);
		}
		if(ae.getSource()==b2)
		{
		c1.removeAllItems();
		}
		if(ae.getSource()==b3)
		{
		c1.removeItem(c1.getSelectedItem());
		}
		
	}
              public static void main(String aa[]) 
              { 
                 new demo(); 
              } 
  } 
