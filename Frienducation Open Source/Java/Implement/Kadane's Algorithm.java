import java.util.*;  
public class first  
{  
    public static void main(String[] args) 
    {  
        int i,n,max=Integer.MIN_VALUE,maxE=0;;
        Scanner sc=new Scanner(System.in);  
        System.out.print("Enter the size of the array : ");  
        n=sc.nextInt();  
        int[] arr=new int[n];  
        System.out.println("Enter the elements of the array : ");  
        for(i=0;i<n;i++)
        {  
            arr[i]=sc.nextInt();  
        }   
        for(i=0;i<n;i++)  
        {  
            maxE+=arr[i];  
              
            if(max<maxE)
            {  
                max=maxE;  
            }  
            if(maxE<0)
            {  
               maxE=0;  
            }  
        }  
    System.out.print("The Maximum contiguous sum in the array is : "+max);  
    }  
}  

