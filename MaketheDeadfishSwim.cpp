#include <iostream>
#include <vector>
#include <string_view>

using namespace std;

vector<int> parse(string_view data) {
    vector<int> result;
    int current = 0;
    for (char c : data) {
        switch (c) {
        case 'i':
            current += 1;
            break;
        case 'd':
            current -= 1;
            break;
        case 's':
            current *= current;
            break;
        case 'o':
            result.push_back(current);
            break;
        }
    }
    return {result};
}

int main() {
  auto result = parse("iiisdoso");
    for (int num : result) {
        cout << num << ' ';
    }
  return 0;
}