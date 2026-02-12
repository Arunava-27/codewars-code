#include <iostream>
#include <string_view>

void print(std::string_view sv) {
    std::cout << sv << '\n';
}

int main() {
    std::string str = "Hello World";

    print(str);              // from std::string
    print("Hello");          // from string literal
    print(str.substr(0, 5)); // temporary string
}
