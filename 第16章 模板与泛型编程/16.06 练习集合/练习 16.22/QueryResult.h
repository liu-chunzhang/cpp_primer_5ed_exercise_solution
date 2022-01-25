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

    typedef vector<string>::size_type lineNo ;

    public:
        QueryResult() = delete ;
        QueryResult( const string &target , shared_ptr<vector<string>> p1 , shared_ptr<set<lineNo>> p2 ) ;
        ~QueryResult() = default ;

    private:
        string targetword ;
        shared_ptr<vector<string>> linevec ;
        shared_ptr<set<lineNo>> linenoset ;
};

#endif // QUERYRESULT_H
