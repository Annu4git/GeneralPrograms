import java.util.Arrays;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeMap;
import java.io.*;

public class Solution
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		String cities[] = new String[5];

		for(int i=0;i<cities.length;i++)
		{
			cities[i] = in.next();
		}
	
		TreeMap<Integer,Integer> myList = new TreeMap<>();

		for(int i=0;i<cities.length;i++)
		{
			myList.put(i,cities[i].length());
		}

		Set myCities = myList.entrySet();

		for(Object i:myCities)
		{
			Integer index = (Integer)i;
			System.out.print(cities[index]+" ");
		}
	}

}



