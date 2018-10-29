#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    char letters[s.length() + 1];
    strcpy(letters, s.c_str());
    int words = 1;
    for(int i = 0; i < sizeof(letters); i++) { 
        if(isupper(letters[i])) {
            words++;
        }
    }

    return words;
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
