#include<bits/stdc++.h>
using namespace std;

int main() {
    string file1, file2, mergedFile;
    // cout << "Enter the name of the first file: ";
    cin >> file1;
    // cout << "Enter the name of the second file: ";
    cin >> file2;
    // cout << "Enter the name of the merged file: ";
    cin >> mergedFile;

    ifstream input1(file1.c_str());
    ifstream input2(file2.c_str());
    ofstream output(mergedFile.c_str());

    string line;
    while (getline(input1, line)) {
        output << line << endl;
    }
    while (getline(input2, line)) {
        output << line << endl;
    }

    input1.close();
    input2.close();
    output.close();
    return 0;
}