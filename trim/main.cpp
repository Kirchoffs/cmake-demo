#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int count = 1;
    string text;
    while (count < argc) {
        text += argv[count++];
    }

    text.erase(0, text.find_first_not_of(" \t\n\r\f\v"));
    text.erase(text.find_last_not_of(" \t\n\r\f\v") + 1);

    cout << text << endl;
    
    return 0;
}