
class GFG {
 
    // Store the factorial of all the
    // digits from [0, 9]
    static int[] factorial = { 1, 1, 2, 6, 24, 120,
                               720, 5040, 40320, 362880 };
 
    // Function to return true
    // if number is strong or not
    public static boolean isStrong(int N)
    {
 
        // Converting N to String so that
        // can easily access all it's digit
        String num = Integer.toString(N);
 
        // sum will store summation of
        // factorial of all digits
        // of a number N
        int sum = 0;
 
        for (int i = 0;
             i < num.length(); i++) {
            sum += factorial[Integer
                                 .parseInt(num
                                               .charAt(i)
                                           + "")];
        }
 
        // Returns true of N is strong number
        return sum == N;
    }
 
    // Function to print all
    // strong number till N
    public static void
    printStrongNumbers(int N)
    {
 
        // Iterating from 1 to N
        for (int i = 1; i <= N; i++) {
 
            // Checking if a number is
            // strong then print it
            if (isStrong(i)) {
                System.out.print(i + " ");
            }
        }
    }
 
    // Driver Code
    public static void
        main(String[] args)
            throws java.lang.Exception
    {
        // Given Number
        int N = 1000;
 
        // Function Call
        printStrongNumbers(N);
    }
}
