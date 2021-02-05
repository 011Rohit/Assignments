    /******************************************************************************
    
    Welcome to GDB Online.
    GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
    C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
    Code, Compile, Run and Debug online from anywhere in world.
    
    *******************************************************************************/
    import java.io.*;
    import java.util.*;
    public class Main
    {
       static void calculate(String line)
        {
            
            
                if(line.equals(null))
                {
                    System.out.println("invalid input");
                   
                }else{
                
            	String arr[] = line.split(" ");
    		
    		HashMap<String, Integer> freq = new HashMap<String, Integer>();
    		
    		for(int i=0;i<arr.length;i++)
            {
                
                if(freq.containsKey(arr[i]))
                {
                    freq.put(arr[i], freq.get(arr[i])+1);
                }
                else
                {
                    freq.put(arr[i],1);
                }
            }
            
            for(Map.Entry<String,Integer> check: 
                        freq.entrySet())
            {
                System.out.println(check.getKey()+" == "+check.getValue());
            }}
        }
    	public static void main(String[] args) throws Exception {
    		
    		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    		String line;
    		System.out.println("enter line :");
    		line = br.readLine();
    		
    		calculate(line);
    	
    	}
    }
