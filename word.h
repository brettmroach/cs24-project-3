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
    Word() {word = ""; used = -1;} // default
    Word(std::string text, std::string filename);
    ~Word(); // Destructor

    // Copy Constructors
    Word(const Word& w); // default
    Word& operator=(const Word& w);
    Word& operator+(const Word& w);

    // Accessors
    std::string get_word() const;
    int num_of_files() const;
    int get_total() const;

    void print_word_data() const;
    /* Prints Total word count and word count per file */

    // Modifier
    void add_file(const std::string& filename);
        // Add new file to Word container

};


#endif