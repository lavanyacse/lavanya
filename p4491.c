import java.util.Scanner;

	public class pangramChecker {
		public static void main(String[] args) {
			Scanner scan=new Scanner(System.in);
			System.out.println("Enter the String:");
			String str=scan.nextLine();
			int len=str.length();
			int flag=0;
			if(len<26){
				System.out.println("The String is not a pangram");
			}
			else
			{
				str=str.toLowerCase();
				for(char ch='a';ch<='z';ch++){
					if(str.indexOf(ch)<0){
						flag=1;
						break;
					}
				}
				if(flag==1){
					System.out.println("String is not a pangram");
				}
				else if(flag==0)
				{
					System.out.println("String is a pangram");
				}
			}
			scan.close();
		}
	}
