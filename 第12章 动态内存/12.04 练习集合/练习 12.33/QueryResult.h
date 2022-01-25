#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <fstream>
#include <map>
#include <set>
#include <sstream>
#include "StrBlob.h"
using namespace std;

class StrBlob ;

class QueryResult {
    friend ostream &operator << ( ostream &os , const QueryResult &result ) ;

    typedef vector<string>::size_type lineNo ;

    public:
        QueryResult() = delete ;
        QueryResult( const string &target , StrBlob p1 , shared_ptr<set<lineNo>> p2 ) ;
        ~QueryResult() = default ;

    public:
        set<lineNo>::iterator begin() ;
        set<lineNo>::const_iterator cbegin() const ;
        set<lineNo>::iterator end() ;
        set<lineNo>::const_iterator cend() const ;
        shared_ptr<vector<string>> get_file() const ;

    private:
        string targetword ;
        StrBlob linevec ;
        shared_ptr<set<lineNo>> linenoset ;
};

#endif // QUERYRESULT_H
