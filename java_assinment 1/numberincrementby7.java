import java.util.Scanner;
public class numberincrementby7
{
	public static void main(String[] args)
	{
 	int num;
	System.out.println("Enter any number");
	Scanner sc=new Scanner(System.in);
	num=sc.nextInt();
	num=num+7;
	System.out.println("Incremented Number="+num);	
	}
}
