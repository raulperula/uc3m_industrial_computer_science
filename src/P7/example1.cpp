#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream input("input.txt"); // reading file in text mode
    if(!input){
        cerr << "Error opening input file!" << endl;
    }

    ofstream output;
    output.open("output.bin", ios::out|ios::binary); //writing file in binary mode
    if(output.is_open()) { //check if file is opened
        cerr << "Output file ready" << endl;
    }

    // ... do things with files ...

    input.close();
    output.close();

    return 0;
}
