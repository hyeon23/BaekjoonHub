#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string get_key(string word) {
    if (word.size() == 1) {
        return word;
    } else if (word.size() == 2) {
        return string(1, word[0]) + "-" + string(1, word[1]);
    } else {
        string middle = word.substr(1, word.size() - 2);
        sort(middle.begin(), middle.end());
        return string(1, word[0]) + "-" + string(1, word[word.size() - 1]) + "-" + middle;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    map<string, string> word_map;
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        string key = get_key(word);
        if (word_map.find(key) == word_map.end() || word < word_map[key]) {
            word_map[key] = word;
        }
    }

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        string query;
        cin >> query;
        string key = get_key(query);
        if (word_map.find(key) != word_map.end()) {
            cout << word_map[key] << " ";
        } else {
            cout << query << " ";
        }
    }

    return 0;
}