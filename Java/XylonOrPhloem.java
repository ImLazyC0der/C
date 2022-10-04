// 1234
// 1+4=5 and 2+3=5 are equal so Xylen otherwise Phyloem
// 12334
// 1+4=5 and 2+3+3=8 are not equal so Phyloem 


class XylenOrPhyloem
{
  public static void main(String[] args)
  {
    int n=12334,sum1=0,sum2=0;
    int last=n%10;
    n=n/10;
while(n>9)
{
  sum2=sum2+n%10;
  n=n/10;
}
sum1=n+last;

System.out.println(sum1);
System.out.println(sum2);
if(sum1==sum2)
System.out.println("xylem");
else
System.out.println("phloem");
  }
}