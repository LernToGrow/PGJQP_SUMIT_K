import java.util.Scanner;
public class displayIntegervalue
{
	void display()
	{
	System.out.println("Enter Any Integer value");
	Scanner sc=new Scanner(System.in);
	int num=sc.nextInt();
	System.out.println("Integer Value="+num);
	}
	public static void main(String[] args)
	{
		displayIntegervalue dInt=new displayIntegervalue();
		dInt.display();
	}
}