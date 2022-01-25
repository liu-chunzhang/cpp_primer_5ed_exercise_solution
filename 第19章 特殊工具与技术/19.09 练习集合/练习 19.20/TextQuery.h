#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

class TextQuery {
    public:
        typedef vector<string>::size_type lineNo ;

    public:
        class QueryResult ;

    public:
        TextQuery() = delete ;
        TextQuery( ifstream &in ) ;
        ~TextQuery() = default ;

    public:
        QueryResult queryresult( const string &target ) const ;

    private:
        shared_ptr<vector<string>> contents ;
        map<string,shared_ptr<set<lineNo>>> index ;
};

class TextQuery::QueryResult {
    friend ostream &operator << ( ostream &os , const QueryResult &result ) ;

    typedef vector<string>::size_type lineNo ;

    public:
        QueryResult() = delete ;
        QueryResult( string target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) ;
        ~QueryResult() = default ;

    private:
        string targetword ;
        shared_ptr<vector<string>> linevec ;
        shared_ptr<set<lineNo>> linenoset ;
};

#endif // TEXTQUERY_H
