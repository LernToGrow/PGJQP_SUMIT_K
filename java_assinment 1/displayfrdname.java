import java.util.Scanner;
public class displayfrdname
{
	void display()
	{
	System.out.println("Enter Any friend name");
	Scanner sc=new Scanner(System.in);
	//char ch=sc.next().charAt(0);
	String ch=sc.nextLine();
	System.out.println("Friend Name="+ch);
	}
	public static void main(String[] args)
	{
		displayfrdname dfname=new displayfrdname();
		dfname.display();
	}
}