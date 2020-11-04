#include <iostream>
using namespace std;

string fizzBuzzParser(int);

int main() {
    for (int i = 1; i <= 100; ++i) {
        cout << fizzBuzzParser(i) << endl;
    }
    return 0;
}

string fizzBuzzParser(int i){
    if (i%15 == 0){
        return "FizzBuzz";
    } else if (i%3 == 0){
        return "Fizz";
    } else if (i%5 == 0){
        return "Buzz";
    }
    return to_string(i);
}
