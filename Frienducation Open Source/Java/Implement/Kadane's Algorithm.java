public static void Kadanes(int numbers[])
{
    int ms=Integer.MIN_VALUE;
    int cs=0;
    for(int i=0;i<numbers.length;i++)
    {
        cs=cs+numbers[i];
        ms=Math.max(cs,ms);
        if(cs<0)
        {
            cs=0;
        }
    }
    System.out.println(ms);
}
