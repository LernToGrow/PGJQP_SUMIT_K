import java.util.Scanner;
public class displayname
{
	void display()
	{
	System.out.println("Enter Any name");
	Scanner sc=new Scanner(System.in);
	//char ch=sc.next().charAt(0);
	String ch=sc.nextLine();
	System.out.println("Name="+ch);
	}
	public static void main(String[] args)
	{
		displayname dname=new displayname();
		dname.display();
	}
}