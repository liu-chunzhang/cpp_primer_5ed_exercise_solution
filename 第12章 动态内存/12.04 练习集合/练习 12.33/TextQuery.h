#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"
using namespace std;

class QueryResult ;
class StrBlob ;

class TextQuery {
    friend class QueryResult ;

    public:
        typedef vector<string>::size_type lineNo ;

    public:
        TextQuery() = delete ;
        TextQuery( ifstream &in ) ;
        ~TextQuery() = default ;

    public:
        QueryResult queryresult( const string &target ) const ;

    private:
        StrBlob contents ;
        map<string,shared_ptr<set<lineNo>>> index ;
};

#endif // TEXTQUERY_H
