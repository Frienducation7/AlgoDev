public static void kadaneMaxSum(int arr[])
  {   int cs=0,ms=Integer.MIN_VALUE;
	  for(int i=0;i<arr.length;i++)
	  {
		 cs+=arr[i];
		
		 ms=Math.max(ms,cs);
		 if(cs<0)
		 {
			 cs=0;
		 }
	  }
	  System.out.println(ms);
  }
