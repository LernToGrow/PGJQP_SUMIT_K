import java.util.*;
public class areaofcircle
{
int r;
Double area,pi=3.14;
void calculate()
{
System.out.println("Enter the Value of radius");
Scanner sc=new Scanner(System.in);
r=sc.nextInt();
area=pi*r*r;
System.out.println("Area Of Circle="+area);
}
public static void main(String[] args)
{
areaofcircle acircle=new areaofcircle();
acircle.calculate();
}
}
