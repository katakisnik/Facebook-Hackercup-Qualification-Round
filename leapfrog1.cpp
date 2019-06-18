#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    ifstream f("leapfrog_ch_.txt");
    ofstream g("p1.out");
    string s, line;
    int counterB = 0, counterdot = 0;
    getline(f, s);
    T = stoi(s);
    int i = 0;
    while (getline(f, line)) {
        char result;
        i++;
        int length = line.length();
        char pond[length];
        strcpy(pond, line.c_str());

        for (int i=0; i<length; i++) {
            if (pond[i] == 'B') counterB++;
            else if (pond[i] == '.') counterdot++;
        }


        g << "Case #" << i <<": ";
        if (counterdot == 0 || counterB == 0) {
            result = 'N';
            g << result << endl;
            counterdot = 0;
            counterB = 0;
            continue;
        }
        if(counterB >= counterdot) result = 'Y';
        else result = 'N';
        g << result << endl;
        counterB = 0;
        counterdot = 0;

    }

    return 0;



}
