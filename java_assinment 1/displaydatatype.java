import java.util.Scanner;
public class displaydatatype
{
	int num;
	char ch;
	float num1;
	void display()
	{
	System.out.println("Enter Any Integer value");
	Scanner sc=new Scanner(System.in);
	int num=sc.nextInt();
	System.out.println("Enter Any char value");
	ch=sc.next().charAt(0);
	System.out.println("Enter Any float value");
	num1=sc.nextFloat();
	System.out.println("Integer Value="+num);
	System.out.println("character  Value="+ch);
	System.out.println("Float Value="+num1);
	}
	public static void main(String[] args)
	{
		displaydatatype dtype=new displaydatatype();
		dtype.display();
	}
}