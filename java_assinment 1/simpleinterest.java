import java.util.*;
public class simpleinterest
{
float si ,principalamount, rate, time;
void calculate()
{
System.out.println("Enter value of principalamount, rate, time");
Scanner sc=new Scanner(System.in);
principalamount=sc.nextFloat();
rate=sc.nextFloat();
time=sc.nextFloat();
si=(principalamount*rate*time)/100;
System.out.println("Simple Interest="+si);
}
public static void main(String[] args)
{
simpleinterest si=new simpleinterest();
si.calculate();
}
}
 
