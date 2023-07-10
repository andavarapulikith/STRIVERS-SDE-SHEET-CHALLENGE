#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> stringMatch(string txt, string pat) {
    vector<int> res;

    int d = 256; 
    int q = 101; 
    int M = pat.length();
    int N = txt.length();

    if (M > N) {
        return res;
    }

    int i, j;
    int p = 0; 
    int t = 0;
    int h = 1;

    for (i = 0; i < M - 1; i++) {
        h = (h * d) % q;
    }

    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }


    for (i = 0; i <= N - M; i++) {
   
        if (p == t) {
            // Check for characters one by one
            for (j = 0; j < M; j++) {
                if (txt[i + j] != pat[j])
                    break;
            }

            // If p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
            if (j == M) {
                res.push_back(i+1);
            }
        }

        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;

           
            if (t < 0) {
                t = t + q;
            }
        }
    }

    return res;
}
