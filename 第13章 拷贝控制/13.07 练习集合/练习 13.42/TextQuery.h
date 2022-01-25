#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"
using namespace std;

class QueryResult ;

class TextQuery {
    public:
        typedef StrVec::size_type lineNo ;

    public:
        TextQuery() = delete ;
        TextQuery( ifstream &in ) ;
        ~TextQuery() = default ;

    public:
        QueryResult queryresult( const string &target ) const ;

    private:
        shared_ptr<StrVec> contents ;
        map<string,shared_ptr<set<lineNo>>> index ;
};

#endif // TEXTQUERY_H
