#define _CRT_SECURE_NO_WARNINGS

#include "string_custom.h"

StringCustom::StringCustom() {
    m_str = new char[1];
    m_str[0] = '\0';
}

StringCustom::StringCustom(const char* c_str) {
    if (c_str == nullptr) 
    {
        m_str = new char[1];
        m_str[0] = '\0';
    }
    else 
    {
        m_str = new char[strlen(c_str) + 1];
        strcpy(m_str, c_str);
    }
}

StringCustom::~StringCustom() {
    delete[] m_str;
}

StringCustom& StringCustom::operator=(const char* c_str) {
    if (c_str == nullptr) 
    {
        delete[] m_str;
        m_str = new char[1];
        m_str[0] = '\0';
    }
    else 
    {
        if (m_str != c_str) 
        {
            delete[] m_str;
            m_str = new char[strlen(c_str) + 1];
            strcpy(m_str, c_str);
        }
    }
    return *this;
}

void StringCustom::assign(const char* c_str) {
    if (c_str == nullptr) 
    {
        delete[] m_str;
        m_str = new char[1];
        m_str[0] = '\0';
    }
    else 
    {
        delete[] m_str;
        m_str = new char[strlen(c_str) + 1];
        strcpy(m_str, c_str);
    }
}

std::size_t StringCustom::getLen() const {
    return strlen(m_str);
}

std::size_t StringCustom::getSize() const {
    return getLen() + 1;
}