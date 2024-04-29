import java.sql.*;  

class Data_Update
{  
	public static void main(String args[])
	{  
		int id = Integer.parseInt(args[0]);
		String name = args[1];
		int age = Integer.parseInt(args[2]);
		try
		{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","root"); 
		String str ="update emp set age = ?, name = ? where id = ?";
		PreparedStatement sql = con.prepareStatement(str);
		sql.setInt(1,age);
		sql.setString(2,name);
		sql.setInt(3,id);
		sql.executeUpdate();
		System.out.println("Data updated");				
		con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  
