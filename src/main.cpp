#include<bits/stdc++.h>
#include <chrono> 
#include "Ford_Fulkersen.h"

using namespace std;
using namespace std::chrono; 


int main(int argc, const char** argv) {
    std::ifstream in("../data/1.txt");
    std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    std::cin.rdbuf(in.rdbuf());
    auto start = high_resolution_clock::now();




    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    return 0;
}