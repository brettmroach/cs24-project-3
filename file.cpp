// Brett Roach      file.cpp
// cs24 Project-3
#include "file.h"

#include <string>

using namespace std;

// File member functions

File::File(string text) {   // Constructor
    filename = text;
    count = 1;
};

// Accessors
string File::get_filename() const {
    return filename;
};
int File::get_count() const {
    return count;
};

// Modifier
void File::inc_count() {
    count++;
    return;
}