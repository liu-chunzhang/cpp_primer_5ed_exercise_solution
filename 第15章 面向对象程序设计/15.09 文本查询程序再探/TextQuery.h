#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include "QueryResult.h"

class QueryResult ;

class TextQuery {
    public:
        using line_no = QueryResult::line_no ;

    public:
        TextQuery() = delete ;
        TextQuery( ifstream &in ) ;
        ~TextQuery() = default ;

    public:
        QueryResult query( const string &target ) const ;

    private:
        shared_ptr<vector<string>> file ;
        map<string,shared_ptr<set<line_no>>> wm ;
};

#endif // TEXTQUERY_H
