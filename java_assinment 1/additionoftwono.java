import java.util.Scanner;
public class additionoftwono
{
void addition()
{
System.out.println("Enter Any Two Number");
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
int b=sc.nextInt();
int c=a+b;
System.out.println("Addition is ="+c);
}
public static void main(String[] args)
{
additionoftwono addtwo=new additionoftwono();
addtwo.addition();
}
}