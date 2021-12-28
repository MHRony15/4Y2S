#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    string str;
    ifile>>str;
    ifile.close();
    ofile.open("output.txt");
    int n = str.length();
    for (int i = 0; i < n; i++) {

        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        ofile << str[i] << count;
    }
    ofile.close();
    return 0;
}
