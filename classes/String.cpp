#pragma once
#include <bits/stdc++.h>
using namespace std;

class StringUtils {
public:
    static string toLower(const string& s) {
        string res = s;
        transform(res.begin(), res.end(), res.begin(), ::tolower);
        return res;
    }

    static string toUpper(const string& s) {
        string res = s;
        transform(res.begin(), res.end(), res.begin(), ::toupper);
        return res;
    }

    static bool isPalindrome(const string& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; ++i)
            if (s[i] != s[n - i - 1])
                return false;
        return true;
    }

    static string reverseString(const string& s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        return rev;
    }

    static unordered_map<char, int> charFrequency(const string& s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        return freq;
    }

    static vector<string> split(const string& s, char delimiter = ' ') {
        vector<string> tokens;
        string token;
        stringstream ss(s);
        while (getline(ss, token, delimiter))
            tokens.push_back(token);
        return tokens;
    }

    static bool startsWith(const string& s, const string& prefix) {
        return s.rfind(prefix, 0) == 0;
    }

    static bool endsWith(const string& s, const string& suffix) {
        if (suffix.size() > s.size()) return false;
        return equal(suffix.rbegin(), suffix.rend(), s.rbegin());
    }

    static string trim(const string& s) {
        size_t start = s.find_first_not_of(" \t\n\r");
        size_t end = s.find_last_not_of(" \t\n\r");
        return (start == string::npos) ? "" : s.substr(start, end - start + 1);
    }

    static string removeSpaces(const string& s) {
        string res;
        for (char c : s)
            if (!isspace(c)) res += c;
        return res;
    }

    static int toInt(const string& s) {
        return stoi(s);
    }

    static long long toLong(const string& s) {
        return stoll(s);
    }

    static string toString(int num) {
        return to_string(num);
    }

    static void sortString(string& s) {
        sort(s.begin(), s.end());
    }

    static void removeDuplicates(string& s) {
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
    }
};
