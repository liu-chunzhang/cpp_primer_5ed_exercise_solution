#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

class QueryResult {
    friend ostream &operator << ( ostream &os , const QueryResult &result ) ;
    friend void limitedPrint( const QueryResult &result , size_t start , size_t termi ) ;

    public:
        typedef vector<string>::size_type lineNo ;

    public:
        QueryResult() = delete ;
        QueryResult( string target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) ;
        ~QueryResult() = default ;

    public:
        set<lineNo>::iterator begin() ;
        set<lineNo>::const_iterator cbegin() const ;
        set<lineNo>::iterator end() ;
        set<lineNo>::const_iterator cend() const ;

    public:
        shared_ptr<vector<string>> get_file() ;

    private:
        string targetword ;
        shared_ptr<vector<string>> linevec ;
        shared_ptr<set<lineNo>> linenoset ;
};

#endif // QUERYRESULT_H
