#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the xorSequence function below.
long xorSequence(long l, long r) {
    int A[r*2];
    A[0] = 0;
    for(int i=1;i<=r*2;i++){
        A[i] = A[i-1]^i;
    }
    long result = 0;
    for(int i=l;i<=r;i++){
        result ^= A[i];
    }
    return result;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string lr_temp;
        getline(cin, lr_temp);

        vector<string> lr = split_string(lr_temp);

        long l = stol(lr[0]);

        long r = stol(lr[1]);

        long result = xorSequence(l, r);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
