#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <vector>

namespace chapter10 {
    class QueryResult {
        friend std::ostream &operator << ( std::ostream &os , const QueryResult &result ) ;

        public:
            typedef std::vector<std::string>::size_type lineNo ;

        public:
            QueryResult() = delete ;
            QueryResult( std::string target , std::shared_ptr<std::vector<std::string>> p1 , std::shared_ptr<std::set<lineNo>> p2 ) ;
            ~QueryResult() = default ;

        public:
            std::set<lineNo>::iterator begin() ;
            std::set<lineNo>::const_iterator cbegin() const ;
            std::set<lineNo>::iterator end() ;
            std::set<lineNo>::const_iterator cend() const ;

        public:
            std::shared_ptr<std::vector<std::string>> get_file() ;

        private:
            std::string targetword ;
            std::shared_ptr<std::vector<std::string>> linevec ;
            std::shared_ptr<std::set<lineNo>> linenoset ;
    };
}

#endif // QUERYRESULT_H
