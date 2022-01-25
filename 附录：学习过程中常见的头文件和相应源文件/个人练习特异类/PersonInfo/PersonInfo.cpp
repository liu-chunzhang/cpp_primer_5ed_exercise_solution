#include "PersonInfo.h"

void PersonInfo::changeName( const string &s ) {
    name = s ;
}

void PersonInfo::push_back( const string& s ) {
    phone.push_back( s ) ;
}

const string& PersonInfo::getname() const {
    return name ;
}

vector<string> PersonInfo::getPhone() const {
    return phone ;
}
