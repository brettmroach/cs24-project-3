// Brett Roach      bag.h
// cs24 Project-3
#ifndef _BAG_H
#define _BAG_H

#include "word.h"
#include "file.h"

#include <string>

#define WORD_LIMIT 1000

class Bag {
private:
    Word container[WORD_LIMIT];
    int used;
public:
    // Constructors
    Bag() {used = 0;}

    // Modifier
    void add_word(const std::string& word,
                  const std::string& filename);
};


#endif