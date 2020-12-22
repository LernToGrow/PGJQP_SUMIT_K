import java.util.Scanner;
public class periandareaofrect
{
int l, b, perimeter, area;
public void calculate()
{
System.out.println("Enter the value of lenght and breadth");
Scanner sc=new Scanner(System.in);
l=sc.nextInt();
b=sc.nextInt();
area=l*b;
perimeter=2*(l*b);
System.out.println("Area of Rectangle="+area);
System.out.println("Perimeter of Rectangle="+perimeter);
}
public static void main(String[] args)
{
periandareaofrect num=new periandareaofrect();
num.calculate();
}
}