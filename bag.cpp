// Brett Roach      bag.cpp
// cs24 Project-3
#include "bag.h"
#include "word.h"

#include <string>
#include <iostream>

using namespace std;

// Bag member functions

// Accessor
int Bag::num_of_words() const {
    return used;
}
Word Bag::word(const string& word) const {
/* Returns specific Word-class item in Bag conatainer */
    bool inbag = false;
    int i;
    for (i = 0; i < used; i++) {
        if (container[i].get_word() == word) {
            inbag = true;
            break;
        }
    }
    if (inbag) {
        return container[i];
    } else {
        return Word();
    }
}

void Bag::print_words() const {
/* Prints every word and its word count */
    for (int i = 0; i < used; i++) {
        cout << container[i].get_word() << "::"
             << container[i].get_total() << endl;
    }
    return;
}

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