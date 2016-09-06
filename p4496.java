import java.util.Scanner;

public class DotProblem {
public static int dot(int upper,int lower){
	int sum=0;
int temp=0;
for(int i=1;i<upper;i++)
	temp+=i;
for(int j=1;j<lower;j++)
	sum+=temp*j;
return sum;
}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner scr=new Scanner(System.in);
System.out.println("Enter number of dots at upper row");
int upper=scr.nextInt();
System.out.println("Enter the number of dots at lower row");
int lower=scr.nextInt();
System.out.println(dot(upper,lower));
	}

}
