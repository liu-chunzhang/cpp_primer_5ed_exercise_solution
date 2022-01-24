// 本程序用于验证读者在练习9.51中的想法，并在必要的地方予以说明
#include "date.h"

int main() {
    string dates[] = { "March 14 2020" , "2/29/2020" , "Dec 25 1998" } ;
    try{
        for( date ds : dates ){
            date dl( ds ) ;
            cout << dl;
        }
    }catch( invalid_argument &e ){
        cout << e.what() << endl;
    }
    return 0;
}
