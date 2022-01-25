#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <fstream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include "StrVec.h"
using namespace std;

class QueryResult {
    friend ostream &operator << ( ostream &os , const QueryResult &result ) ;

    typedef StrVec::size_type lineNo ;

    public:
        QueryResult() = delete ;
        QueryResult( string target , shared_ptr<StrVec> p1 , shared_ptr<set<lineNo>> p2 ) ;
        ~QueryResult() = default ;

    private:
        string targetword ;
        shared_ptr<StrVec> linevec ;
        shared_ptr<set<lineNo>> linenoset ;
};

#endif // QUERYRESULT_H
