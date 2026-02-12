int solution(int number) 
{
    int sum = 0;
    for (int i = 0; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;

}

// Example usage:
// #include <iostream>
// int main() {
//     int number = 10;
//     std::cout << solution(number) << std::endl; // Output: 23
//     return 0;
// }