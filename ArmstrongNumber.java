
public class ArmstrongNumber {
    public static void main(String[] args) {
        int number = 1652;
        boolean res = isNarcissistic(number);
        System.out.println(res);
    }
    private static long pow(long base, int exp) {
        long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        return result;
    }

    public static boolean isNarcissistic(int number) {
        if (number < 0)
            return false;

        String s = String.valueOf(number);
        int length = s.length();

        int temp = number;
        long sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, length);

            // early exit prevents unnecessary overflow
            if (sum > number)
                return false;

            temp /= 10;
        }

        return sum == number;
    }
}