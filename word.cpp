// Brett Roach       word.cpp
// cs24 Project-3
#include "word.h"
#include "file.h"

#include <string>

using namespace std;

// Word member functions

Word::Word(string text, string filename) { // Constructor
    word = text;
    container[0] = File(filename);
    used = 1;
}

// Accessors
string Word::get_word() const {
    return word;
};
int Word::get_total() const {
    int sum = 0;
    for (int i = 0; i < used; i++) {
        sum += container[i].get_count();
    }
    return sum;
}

// Modifier
void Word::add_file(const string& filename){
    bool newFile = true;
    int i;
    for (i = 0; i < used; i++) {
        if (container[i].get_filename() == filename) {
            newFile = false;
            break;
        }
    }
    if (!newFile) {
        container[i].inc_count();
    } else {
        container[used] = File(filename);
        used++;
    }
}