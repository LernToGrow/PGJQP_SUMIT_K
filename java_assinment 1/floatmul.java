import java.util.*;
public static floatmul
{
float num1;
float num2;
float mul;
void mulfloatno()
{
System.out.println("Enter any two float number");
Scanner sc=new Scanner(System.in);
num1=sc.nextFloat();
num2=sc.nextFloat();
mul=num1*num2;
System.out.println("Multiplication ="+mul);
}
public static void main(String[] args)
{
floatmul fmul=new floatmul();
fmul.mulfloatno();
}
}
