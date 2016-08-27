import java.util.Arrays;

import java.util.Scanner;
public class delete {

public static void main(String[] args) {
	Scanner input=new Scanner(System.in);
	String num;
	System.out.println("enter the number :  ");
	num=input.nextLine();
	
	int k;

	System.out.println("enter the number of digits to delete : ");
	k=input.nextInt();
	

	char frst[]=num.toCharArray();
	char sec[]=Arrays.copyOf(frst, frst.length);
	Arrays.sort(sec);   
	int num_count=sec.length;
	while(k>0)
	{
	char high=sec[num_count-1];
	for(int s=0;s<frst.length;s++)
	{
		if(high==frst[s])
		{
			frst[s]='1';
			
		}
		
		else{
			continue;
		}
	}
	--k;
	--num_count;
	

	}
	
	
	
	
	for(int y=0;y<num.length();y++)
	{
		if(frst[y]!='1')
		{
		System.out.print(frst[y]);	
		}
	}
	
}

}
