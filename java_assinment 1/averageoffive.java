import java.util.*;
public class averageoffive
{
int num1,num2,num3,num4,num5,sum,avg;
void calculate()
{
System.out.println("Enter any Five number");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
num4=sc.nextInt();
num5=sc.nextInt();
sum=num1+num2+num3+num4+num5;
avg=sum/5;
System.out.println("Average of number="+avg);
}
public static void main(String[] args)
{
averageoffive avgfive=new averageoffive();
avgfive.calculate();
}
}
