import java.sql.*;
//import java.sql.DriverManager;
//import java.sql.Connection;

class Database_con 
{
	public static void main(String args[])
	{
		try
		{
			System.out.println("hello");
			Connection conn = null;
     				Class.forName("com.mysql.jdbc.Driver");//define driver
Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/student","root","root");//connection

System.out.print("Database is connected !");
conn.close();
		}
		catch(Exception e)
		{
			//System.out.print("Do not connect to DB - Error:"+e);	
		}
	}
}
