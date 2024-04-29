import javax.swing.*;
import java.awt.event.*;

public class Notepad implements ActionListener{
JFrame f;
JMenuBar mb;
JMenu file,edit,help;
JMenuItem cut,copy,paste,selectAll,new1,save,saveas,gethelp;
JTextArea ta;
	
Notepad(){
f=new JFrame();
ImageIcon i1=new ImageIcon("apl.jpeg");
new1=new JMenuItem("New",i1);
save=new JMenuItem("Save");
saveas=new JMenuItem("Save As");
gethelp=new JMenuItem("Get help");
cut=new JMenuItem("cut");
copy=new JMenuItem("copy");
paste=new JMenuItem("paste");
selectAll=new JMenuItem("selectAll");

cut.addActionListener(this);
copy.addActionListener(this);
paste.addActionListener(this);
selectAll.addActionListener(this);

mb=new JMenuBar();
mb.setBounds(5,5,400,40);

file=new JMenu("File");
edit=new JMenu("Edit");
help=new JMenu("Help");

edit.add(cut);edit.add(copy);edit.add(paste);edit.add(selectAll);
file.add(new1);file.add(save);file.add(saveas);
help.add(gethelp);

mb.add(file);mb.add(edit);mb.add(help);

ta=new JTextArea();
//JScrollPane sp=new JScrollPane(ta);
ta.setBounds(5,30,460,460);

f.add(mb);f.add(ta);

f.setLayout(null);
f.setSize(500,500);
f.setVisible(true);
}

public void actionPerformed(ActionEvent e) {
			if(e.getSource()==cut)
				ta.cut();
			if(e.getSource()==paste)
				ta.paste();
			if(e.getSource()==copy)
				ta.copy();
			if(e.getSource()==selectAll)
				ta.selectAll();
		}
	public static void main(String[] args) {
		new Notepad();
	}
}
