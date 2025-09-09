#include "stats_utils.h"
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findMode(int arr[], int size) {
    unordered_map<int, int> frequencyMap;
    int maxFrequency = 0;
    vector<int> modes;
    
    if (size == 0) return modes;
    
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
        if (frequencyMap[arr[i]] > maxFrequency) {
            maxFrequency = frequencyMap[arr[i]];
        }
    }
    
    for (const auto &pair : frequencyMap) {
        if (pair.second == maxFrequency) {
            modes.push_back(pair.first);
        }
    }
    
    return modes;
}
