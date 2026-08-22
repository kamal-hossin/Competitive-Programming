#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string mainStr, subStr;
        cin >> mainStr >> subStr;

        vector<int> charPositions[26];

        for (int i = 0; i < mainStr.size(); i++) {
            charPositions[mainStr[i] - 'a'].push_back(i);
        }

        char firstChar = subStr[0], secondChar = subStr[1], thirdChar = subStr[2];
        long long count = 0;

        for (int i = 0; i < charPositions[firstChar - 'a'].size(); i++) {
            int firstIndex = charPositions[firstChar - 'a'][i];
            for (int j = 0; j < charPositions[secondChar - 'a'].size(); j++) {
                int secondIndex = charPositions[secondChar - 'a'][j];

                if (secondIndex > firstIndex) {
                    for (int k = 0; k < charPositions[thirdChar - 'a'].size(); k++) {
                        int thirdIndex = charPositions[thirdChar - 'a'][k];
                        if (thirdIndex > secondIndex) {
                            count++;
                        }
                    }
                }
            }
        }

        cout << count << endl;
    }

   return 0;
}
