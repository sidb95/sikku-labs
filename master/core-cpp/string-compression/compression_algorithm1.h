/*
compression_algorithm1.h
sidb95 
bhatoresiddharth@gmail.com 
29 July 2024
*/

#include <string>

string compression1(string s, int n) {
    string s1 = "";
    int i = 0;
    while (i < n) {
        int count = 0;
        s1 += s[i];
        char c = s[i];
        while ((i < n) && (s[i] == c)) {
            i += 1;
            count += 1;
        }
        if (count != 1) {
            s1 += to_string(count);
        }
    }
    return s1;
}
