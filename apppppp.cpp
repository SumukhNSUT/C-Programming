#include <bits/stdc++.h>
using namespace std;

long getMaximumPrizes(string inputString) {
    long n = inputString.size();
    long total = 0;
    
    // Count the number of 'A's before each 'M' and 'M's before each 'Z'
    vector<long> a_count(n, 0);
    vector<long> m_count(n, 0);
    
    long a = 0;
    for (long i = 0; i < n; ++i) {
        if (inputString[i] == 'A') {
            a++;
        }
        a_count[i] = a;
    }
    
    long m = 0;
    long current_am = 0;
    for (long i = 0; i < n; ++i) {
        if (inputString[i] == 'M') {
            m += a_count[i];
        }
        m_count[i] = m;
    }
    
    long amz = 0;
    for (long i = 0; i < n; ++i) {
        if (inputString[i] == 'Z') {
            amz += m_count[i];
        }
    }
    
    // Now, find the best position to insert a character to maximize 'AMZ'
    long max_increase = 0;
    
    // Case 1: Insert 'A' at position k
    a = 0;
    m = 0;
    long am_insert_a = 0;
    for (long i = 0; i <= n; ++i) {
        // The number of 'M's after i multiplied by the (a + 1 if we insert 'A' here)
        long current_m = 0;
        long current_z = 0;
        for (long j = i; j < n; ++j) {
            if (inputString[j] == 'M') {
                current_m++;
            } else if (inputString[j] == 'Z') {
                current_z += current_m;
            }
        }
        long increase = current_z;
        if (increase > max_increase) {
            max_increase = increase;
        }
        
        if (i < n && inputString[i] == 'A') {
            a++;
        }
    }
    
    // Case 2: Insert 'M' at position k
    a = 0;
    long am_before = 0;
    for (long i = 0; i <= n; ++i) {
        long z_after = 0;
        long m_after = 0;
        for (long j = i; j < n; ++j) {
            if (inputString[j] == 'M') {
                m_after++;
            } else if (inputString[j] == 'Z') {
                z_after += m_after;
            }
        }
        long increase = a * z_after;
        if (increase > max_increase) {
            max_increase = increase;
        }
        
        if (i < n && inputString[i] == 'A') {
            a++;
        }
    }
    
    // Case 3: Insert 'Z' at position k
    a = 0;
    m = 0;
    long am = 0;
    for (long i = 0; i <= n; ++i) {
        long increase = am;
        if (increase > max_increase) {
            max_increase = increase;
        }
        
        if (i < n) {
            if (inputString[i] == 'A') {
                a++;
            } else if (inputString[i] == 'M') {
                m += a;
            }
            am = m;
        }
    }
    
    return amz + max_increase;
}

int main() {
    string inputString;
    cin >> inputString;
    cout << getMaximumPrizes(inputString) << endl;
    return 0;
}