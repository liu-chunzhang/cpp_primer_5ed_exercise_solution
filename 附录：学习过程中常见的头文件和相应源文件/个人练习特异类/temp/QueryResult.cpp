#include "QueryResult.h"
typedef vector<string>::size_type line_no ;

QueryResult::QueryResult( string s , shared_ptr<set<line_no>> p , shared_ptr<vector<string>> f ) : sought( s ) , lines( p ) , file( f ) {

}

QueryResult::~QueryResult() {

}

set<line_no>::iterator QueryResult::begin() {
    return lines->begin() ;
}

set<line_no>::const_iterator QueryResult::cbegin() const {
    return lines->cbegin() ;
}

set<line_no>::iterator QueryResult::end() {
    return lines->end() ;
}

set<line_no>::const_iterator QueryResult::cend() const {
    return lines->cend() ;
}

shared_ptr<vector<string>> QueryResult::get_file() {
    return file ;
}
