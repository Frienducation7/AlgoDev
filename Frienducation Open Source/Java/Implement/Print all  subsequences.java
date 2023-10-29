public static void subSequences(int arr[])
  {   int nosub=0;
	  for(int i=0;i<arr.length;i++)
	  {
		  for(int j=i;j<arr.length;j++)
		  {
			  for(int k=i;k<=j;k++)
			  {
				  System.out.print(arr[k]+" ");
			  }nosub++;
			  System.out.println();
		  }System.out.println();
	  }
	  System.out.println(nosub);//Number of sub arrays.
  }