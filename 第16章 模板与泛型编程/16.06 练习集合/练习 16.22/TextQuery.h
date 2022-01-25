#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "DebugDelete.h"
#include "QueryResult.h"
using namespace std;

class QueryResult ;

class TextQuery {
    public:
        typedef vector<string>::size_type lineNo ;

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

#endif // TEXTQUERY_H
