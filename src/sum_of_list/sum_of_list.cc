#include <iostream>
#include <list>
#include "../../include/sum_of_list.hpp"

using std::list;
using std::cout;

int computeSumUsingFor() {
    int numbers[5] = { 304, 75, 91, 22, 3 };

    int sum = 0;
    int len = sizeof(numbers);
    for(int i = 0; i < len; i++ ) {
        sum = sum + numbers[i];
    }

    return sum;
}

int computeSumUsingWhile() {
    return 0;
}

int computeSumForRecursion() {
    return 0;
}

int computeSumUsingForVector() {
    return 0;
}

int computeSumUsingForEachList() {
    list<int> numbers = { 23, 45, 109, 4, 67, 48, 237 };
    int sum = 0;
    for(const int number : numbers) {
        sum = sum + number; 
    }

    return sum;
}

int main() {
    cout << computeSumUsingForEachList() << "\n";
    cout << computeSumUsingFor() << "\n";

    return 0;
}