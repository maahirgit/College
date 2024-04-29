 import java.awt.*; 
 import java.awt.event.*; 
import javax.swing.*;
 class demolist3 extends JFrame implements ActionListener
 { 
  
 	JList l1,l2;
	JScrollPane p1,p2;
	JButton b1,b2,b3;
	Container con;
	DefaultListModel dm1,dm2;
      demolist3() 
         { 
           setTitle("JList"); 
           setLayout(new FlowLayout(FlowLayout.CENTER)); 
           setSize(400,400); 
           setVisible(true); 
	   con=getContentPane();
	dm1=new DefaultListModel();
		dm1.addElement("January");
		dm1.addElement("Feb");
		dm1.addElement("March");
		dm1.addElement("April");
		dm1.addElement("May");
		dm1.addElement("June");
		dm1.addElement("July");
		l1=new JList(dm1);
		l1.setVisibleRowCount(3);
		//l1.setSelectedIndex(3);
		p1=new JScrollPane(l1);
		//l1.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
	l1.setSelectionMode(ListSelectionModel.MULTIPLE_INTERVAL_SELECTION);
	b1=new JButton(">");
	b2=new JButton(">>");
	b3=new JButton(">>>");
	b1.addActionListener(this);
	b2.addActionListener(this);
	b3.addActionListener(this);
	dm2=new DefaultListModel();
	l2=new JList(dm2);
	l2.setVisibleRowCount(3);
	p2=new JScrollPane(l2);
	con.add(p1);
	con.add(b1);
	con.add(b2);
	con.add(b3);
	con.add(p2);
	
	con.setLayout(new FlowLayout(FlowLayout.CENTER));
	
         }
	public void actionPerformed(ActionEvent ae)
	{
			String s=ae.getActionCommand();
			if(s==">")
			{
			dm2.addElement(l1.getSelectedValue().toString());
			dm1.remove(l1.getSelectedIndex());
			}
			else if(s==">>")
			{
			Object[] arr1 =l1.getSelectedValues();
          	
			for(int i=0;i<arr1.length;i++)
				{
				dm2.addElement(arr1[i]);
				dm1.removeElement(arr1[i]);
				}
			}
			else if(s==">>>")
			{
				int len=dm1.getSize();
				for(int i=0;i<len;i++)
					{
						dm2.addElement(dm1.getElementAt(i));
					}
				dm1.clear();
			}

	} 
              public static void main(String aa[]) 
              { 
                 new demolist3(); 
              } 
  } 
