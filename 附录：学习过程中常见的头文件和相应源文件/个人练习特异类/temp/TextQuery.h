#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <sstream>
#include <map>
#include "QueryResult.h"

class TextQuery{
    public:
        using line_no = vector<string>::size_type ;
        TextQuery( ifstream& );
        QueryResult query( const string& ) const ;
        virtual ~TextQuery();

    private:
        shared_ptr<vector<string>> file ;
        map<string,shared_ptr<set<line_no>>> wm ;
};

#endif // TEXTQUERY_H
