public class Main
{
    public static void main(String [] args)
    {
        int n = 3;

        n = n + 1;

        for (int i=1;i<=n;i++) 
        {
            if(i*i==n)
            {
                System.out.print("Sunny Number");

                break;
            }
            if(i*i>n)
            {
                System.out.print("Not a Sunny Number");

                break;
            } 
        }
    }
}
