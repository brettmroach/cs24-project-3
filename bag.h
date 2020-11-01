// Brett Roach      bag.h
// cs24 Project-3
#ifndef _BAG_H
#define _BAG_H

#include "word.h"

#include <string>

#define WORD_LIMIT 1000

class Bag {
private:
    Word container[WORD_LIMIT];
    int used;
public:
    // Constructors
    Bag() {used = 0;}

    // Accessor
    int num_of_words() const;
    Word word(const std::string& word) const;
    /* Returns specific Word-class item in Bag conatainer */

    void print_words() const;
    /* Prints every word and its word count */

    // Modifier
    void add_word(const std::string& word,
                  const std::string& filename);
};


#endif