// Brett Roach       word.cpp
// cs24 Project-3
#include "word.h"
#include "file.h"

#include <string>
#include <iostream>

using namespace std;

// Word member functions

Word::Word(string text, string filename) { // Constructor
    word = text;
    container[0] = File(filename);
    used = 1;
}
Word::~Word() { // Destructor
    word = "";
    used = -1;
}

// Accessors
string Word::get_word() const {
    return word;
}
int Word::num_of_files() const {
    return used;
}
int Word::get_total() const {
    int sum = 0;
    for (int i = 0; i < used; i++) {
        sum += container[i].get_count();
    }
    return sum;
}

void Word::print_word_data() const {
/* Prints Total word count and word count per file */
    cout << "Total Count: " << get_total() << endl;
    for (int i = 0; i < used; i++) {
        cout << container[i].get_filename() << "::"
             << container[i].get_count() << endl;
    }
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