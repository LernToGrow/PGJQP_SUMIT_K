import java.util.Scanner;
public class areaofsquare
{
void calculate()
{
System.out.println("Enter Any values");
Scanner sc=new Scanner(System.in);
double side=sc.nextDouble();
double area=side*side;
System.out.println("Area of Squre="+area);
}
public static void main(String[] args)
{
areaofsquare areasquare=new areaofsquare();
areasquare.calculate();
}
}