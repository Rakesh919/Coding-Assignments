#include <iostream>
#include <unordered_map>

char findMaxFrequencyElement(const char* arr, int size) {
    std::unordered_map<char, int> frequencyMap;

    
    for (int i = 0; i < size; ++i) {
        char currentChar = arr[i];
        frequencyMap[currentChar]++;
    }

    char maxFrequencyChar = '\0';
    int maxFrequency = 0;
    for (const auto& entry : frequencyMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            maxFrequencyChar = entry.first;
        }
    }

    return maxFrequencyChar;
}


int main() {
    const char arr[] = "hello";
    int size = sizeof(arr) / sizeof(arr[0]);

    char maxFrequencyChar = findMaxFrequencyElement(arr, size);

    if (maxFrequencyChar != '\0') {
        std::cout << "The character with maximum frequency is: " << maxFrequencyChar << std::endl;
    } else {
        std::cout << "The character array is empty." << std::endl;
    }

    return 0;
}
