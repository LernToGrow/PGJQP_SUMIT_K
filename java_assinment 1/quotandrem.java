import java.util.*;
public class quotandrem
{
int a,b,qout,rem;
void getdata()
{
System.out.println("Enter any two values");
Scanner sc=new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
}
void display()
{
qout=a/b;
rem=a%b;
System.out.println("Qoutient is ="+qout);
System.out.println("Reaminder is="+rem);
}
public static void main(String[] args)
{
quotandrem outrem=new quotandrem();
outrem.getdata();
outrem.display();
}
}