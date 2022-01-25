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

    public:
        typedef vector<string>::size_type line_no ;

    public:
        QueryResult() = delete ;
        QueryResult( string target , shared_ptr<set<line_no>> p1 , shared_ptr<vector<string>> p2 ) ;
        ~QueryResult() = default ;

    public:
        set<line_no>::iterator begin() ;
        set<line_no>::iterator end() ;
        shared_ptr<vector<string>> get_file() ;

    private:
        string targetword ;
        shared_ptr<set<line_no>> line_noset ;
        shared_ptr<vector<string>> linevec ;
};

#endif // QUERYRESULT_H
