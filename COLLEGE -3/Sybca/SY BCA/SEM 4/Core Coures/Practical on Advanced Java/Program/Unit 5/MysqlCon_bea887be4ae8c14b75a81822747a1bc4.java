import java.sql.*;  
class MysqlCon 
{  
public static void main(String args[])
{  
	try
	{  
		Class.forName("com.mysql.jdbc.Driver");  //define driver
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","root"); //connection
		Statement stmt=con.createStatement();  
		ResultSet rs=stmt.executeQuery("select * from emp");  
		while(rs.next())  
		{
			//System.out.println(rs.getInt(1)+"  "+rs.getString(2) + " " + rs.getInt(3)); //1 2 3 - column number else give field name 
			System.out.println(rs.getInt("id")+"  "+rs.getString("name") + " " + rs.getInt("age")); //1 2 3 - column number else give field name 
		}
		con.close();  
	}
	catch(Exception e)
	{ 
		System.out.println(e);
	}  
}  
}  
