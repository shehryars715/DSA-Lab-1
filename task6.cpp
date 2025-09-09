#include <vector>
#include <map>
using namespace std;

vector<int> find_mode(const vector<int>& arr) {
    if (arr.empty()) return {};  // return empty vector for empty input

    map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }

    // find max frequency
    int max_freq = 0;
    for (auto& [key, val] : freq) {
        if (val > max_freq) max_freq = val;
    }

    // collect all modes
    vector<int> modes;
    for (auto& [key, val] : freq) {
        if (val == max_freq) {
            modes.push_back(key);
        }
    }
    return modes;
}
