// Brett Roach      file.h
// cs24 Project-3
#ifndef _FILE_H
#define _FILE_H

#include <string>

class File {
private:
    std::string filename;
    int count;
public:
    // Constructors
    File() {filename = ""; count -1;}  // default
    File(std::string text);
    ~File(); // Destructor

    // Copy Constructors
    File(const File& f);
    File& operator=(const File& f);
    File& operator+(const File& f);

    // Accessors
    std::string get_filename() const;
    int get_count() const;

    // Modfiier
    void inc_count();
};


#endif