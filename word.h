// Brett Roach      word.h
// cs24 Project-3
#ifndef _WORD_H
#define _WORD_H

#include "file.h"

#include <string>

#define FILE_LIMIT 10

class Word {
private:
    std::string word;
    File container[FILE_LIMIT];
    int used;
public:
    // Constructors
    Word() {word = ""; used = 0;} // default
    Word(std::string text, std::string filename);

    // Accessors
    std::string get_word() const;
    int get_total() const;

    // Modifier
    void add_file(const std::string& filename);
        // Add new file to Word container

};


#endif