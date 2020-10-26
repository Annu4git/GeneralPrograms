import java.util.Scanner;
import java.io.*;

public class AABBCC
{
	public static void main(String args[])
	{
        Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        String s = in.next();
        String result = "";
        char ar[] = s.toCharArray();
        int count = 1;
        for(int i=0;i<ar.length-1;i++)
        {
           
            if(ar[i]!=ar[i+1])
            {
                result=result+ar[i]+count;
                count = 1;
            } 
            else         
            count++;
        }  
        if(count == 1)
         result =result + ar[ar.length-1]+1;
         else
         result = result +ar[ar.length-1]+count;
         System.out.println(result);
        }
	}



