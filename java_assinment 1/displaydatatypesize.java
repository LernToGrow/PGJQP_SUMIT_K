import java.util.*;
public class displaydatatypesize
{
public void display()
{
System.out.println("Size of integer="+(Integer.SIZE/8)+" bytes");
System.out.println("Size of Byte="+(Byte.SIZE/8)+" bytes");
System.out.println("Size of Short="+(Short.SIZE/8)+" bytes");
System.out.println("Size of Long="+(Long.SIZE/8)+" bytes");
System.out.println("Size of Float="+(Float.SIZE/8)+" bytes");
System.out.println("Size of Double="+(Double.SIZE/8)+" bytes");

}
public static void main(String[] args)
{
displaydatatypesize dsize=new displaydatatypesize();
dsize.display();
}
}