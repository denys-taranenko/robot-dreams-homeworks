#pragma once
#include <cstring>

class StringCustom {

public:

    StringCustom();
    StringCustom(const char* c_str);
    ~StringCustom();

public:

    StringCustom& operator=(const char* c_str);

public:

    void assign(const char* c_str);
    std::size_t getLen() const;
    std::size_t getSize() const;

private:

    char* m_str;
};