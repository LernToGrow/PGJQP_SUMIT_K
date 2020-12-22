import java.util.Scanner;
public class multiplicationofthree
{
void addition()
{
System.out.println("Enter Any three Number");
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
int b=sc.nextInt();
int c=sc.nextInt();
int d=a*b*c;
System.out.println("Multiplication is ="+d);
}
public static void main(String[] args)
{
multiplicationofthree multhree=new multiplicationofthree();
multhree.addition();
}
}