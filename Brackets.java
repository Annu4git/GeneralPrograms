import java.util.Scanner;
import java.util.Stack;
import java.io.*;

public class Brackets
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        String s= in.next();
        
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)==')')
                stack.pop();
                else
                stack.push(s.charAt(i));
        }

        if(stack.empty())
        System.out.println("Done");
        else
        System.out.println("Not Done");
	}
}
