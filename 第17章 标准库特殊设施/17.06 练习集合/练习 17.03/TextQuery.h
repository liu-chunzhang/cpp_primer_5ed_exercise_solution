#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <tuple>
#include <vector>
using namespace std;

class TextQuery {
    public:
        typedef vector<string>::size_type lineNo ;
        typedef tuple<string,shared_ptr<vector<string>>,shared_ptr<set<lineNo>>> Queryresult ;

    public:
        TextQuery() = delete ;
        TextQuery( ifstream &in ) ;
        ~TextQuery() = default ;

    public:
        Queryresult queryresult( const string &target ) const ;

    private:
        shared_ptr<vector<string>> contents ;
        map<string,shared_ptr<set<lineNo>>> index ;
};

#endif // TEXTQUERY_H
