#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPangram(const string &s) {
    bool seen[26] = {false};

    for (char ch : s) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            seen[ch - 'a'] = true;
        }
    }

    // Check if all 26 letters were seen
    for (bool present : seen) {
        if (!present) return false;
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    if (isPangram(input)) {
        cout << "The sentence is a pangram." << endl;
    } else {
        cout << "The sentence is NOT a pangram." << endl;
    }

    return 0;
}

/*
* Step-by-Step Visualization of Array Filling
* 
* We start with:
* 
* seen[26] = all false
* 
* 
* Meaning:
* 
* [a] [b] [c] [d] [e] [f] [g] [h] [i] [j] [k] [l] [m]
*  F   F   F   F   F   F   F   F   F   F   F   F   F
* 
* [n] [o] [p] [q] [r] [s] [t] [u] [v] [w] [x] [y] [z]
*  F   F   F   F   F   F   F   F   F   F   F   F   F
* 
* 
* Now let's process each letter the loop encounters.
* 
* 1. 'T' → lowercase 't'
* 
* Index: 't' - 'a' = 19
* 
* Mark index 19:
* 
* t = true
* 
* 2. 'h'
* 
* Index: 7
* Set:
* 
* h = true
* 
* 3. 'e'
* 
* Index: 4
* Set:
* 
* e = true
* 
* After processing "The":
* a b c d e f g h i j k l m
* F F F F T F F T F F F F F
* 
* n o p q r s t u v w x y z
* F F F F F F T F F F F F F
* 
* Move through the entire sentence
* Processing "quick"
* 
* q → index 16
* 
* u → 20
* 
* i → 8
* 
* c → 2
* 
* k → 10
* 
* Set them all to true.
* 
* Processing "brown"
* 
* b → 1
* 
* r → 17
* 
* o → 14
* 
* w → 22
* 
* n → 13
* 
* Processing "fox"
* 
* f → 5
* 
* o → already true
* 
* x → 23
* 
* Processing "jumps"
* 
* j → 9
* 
* u → already true
* 
* m → 12
* 
* p → 15
* 
* s → 18
* 
* Processing "over"
* 
* o, v (21), e, r
* all become true
* 
* Processing "the" (again)
* 
* Letters already set.
* 
* Processing "lazy"
* 
* l → 11
* 
* a → 0
* 
* z → 25
* 
* y → 24
* 
* Final Array After Full Sentence
* 
* All 26 positions are now true:
* 
* a b c d e f g h i j k l m
* T T T F T T F T T T T T T
* 
* n o p q r s t u v w x y z
* T T T T T T T T T T T T T
* 
* 
* Notice: letter 'd' was missing until the word "dog", which sets:
* 
* d → index 3 → true
* 
* o → already true
* 
* g → index 6 → true
* 
* Now all letters A–Z are covered.
* 
* Final Result
* 
* Because every index in the seen[] array is marked true, the program concludes:
* 
* The sentence is a pangram.
*/