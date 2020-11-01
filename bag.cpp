// Brett Roach      bag.cpp
// cs24 Project-3
#include "bag.h"
#include "word.h"
#include "file.h"

#include <string>

using namespace std;

// Bag member functions

// Modifier
void Bag::add_word(const string& word,
                   const string& filename) {
    bool inbag = false;
    int i;
    for (i = 0; i < used; i++) {
        if (container[i].get_word() == word) {
            inbag = true;
            break;
        }
    }
    if (inbag) {
        container[i].add_file(filename);
    } else {
        container[used] = Word(word, filename);
        used++;
    }
}