#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <iostream>
#include <vector>
#include <set>
#include <memory>
using namespace std;

class QueryResult{
    friend ostream& print( ostream& , const QueryResult& ) ;

    public:
        typedef vector<string>::size_type line_no ;
        QueryResult( string , shared_ptr<set<line_no>> , shared_ptr<vector<string>> );
        virtual ~QueryResult();
        set<line_no>::iterator begin() ;
        set<line_no>::const_iterator cbegin() const ;
        set<line_no>::iterator end() ;
        set<line_no>::const_iterator cend() const ;
        shared_ptr<vector<string>> get_file() ;

    protected:

    private:
        string sought ;
        shared_ptr<set<line_no>> lines ;
        shared_ptr<vector<string>> file ;
};

#endif // QUERYRESULT_H
