// ������������֤��������ϰ3.21�е��뷨�����ڱ�Ҫ�ĵط�����˵�����õ�����������ϰ3.16
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 ;
    cout << "v1��Ԫ�ظ����ǣ�" << v1.size() << endl;
    if( v1.cbegin() != v1.cend() ){                             // �õ������ж�Ԫ�����ޣ�ͷ��������β��������ȣ���˵��û��Ԫ�أ���֮��Ȼ����ͬ
        cout << "v1��Ԫ�طֱ��ǣ�" ;
        for( int i : v1 )                                        // ʹ�÷�Χfor������ÿһ��Ԫ���ǿ��Եģ���Ϊ���ǲ�û�����ѭ������vector������
            cout << i << " " ;                                   // ��Ԫ�أ�
        cout << endl;
    }
    else
       cout << "v1û��Ԫ�ء�" << endl;

    vector<int> v2( 10 ) ;
    cout << "v2��Ԫ�ظ����ǣ�" << v2.size() << endl;
    if( v2.cbegin() != v2.cend() ){
        cout << "v2��Ԫ�طֱ��ǣ�" ;
        for( vector<int>::const_iterator it = v2.cbegin() ; it != v2.cend() ; ++it )    // �ô�ͳfor���ִ��ѭ��Ҳ�ǿ��Եģ��˴�����ʹ��ѭ��������                            //
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v2û��Ԫ�ء�" << endl;

    vector<int> v3( 10 , 42 ) ;
    cout << "v3��Ԫ�ظ����ǣ�" << v3.size() << endl;
    if( v3.cbegin() != v3.cend() ){
        cout << "v3��Ԫ�طֱ��ǣ�" ;
        for( vector<int>::const_iterator it = v3.cbegin() ; it != v3.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v3û��Ԫ�ء�" << endl;

    vector<int> v4{ 10 };
    cout << "v4��Ԫ�ظ����ǣ�" << v4.size() << endl;
    if( v4.cbegin() != v4.cend() ){
        cout << "v4��Ԫ�طֱ��ǣ�" ;
        for( vector<int>::const_iterator it = v4.cbegin() ; it != v4.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v4û��Ԫ�ء�" << endl;

    vector<int> v5{ 10 , 42 } ;
    cout << "v5��Ԫ�ظ����ǣ�" << v5.size() << endl;
    if( v5.cbegin() != v5.cend() ){
        cout << "v5��Ԫ�طֱ��ǣ�" ;
        for( vector<int>::const_iterator it = v5.cbegin() ; it != v5.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v5û��Ԫ�ء�" << endl;

    vector<string> v6{ 10 } ;
    cout << "v6��Ԫ�ظ����ǣ�" << v6.size() << endl;
    if( v6.cbegin() != v6.cend() ){
        cout << "v6��Ԫ�طֱ��ǣ�" ;
        for( vector<string>::const_iterator it = v6.cbegin() ; it != v6.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v6û��Ԫ�ء�" << endl;

    vector<string> v7{ 10 , "Hi" } ;
    cout << "v7��Ԫ�ظ����ǣ�" << v7.size() << endl;
    if( v7.cbegin() != v7.cend() ){
        cout << "v7��Ԫ�طֱ��ǣ�" ;
        for( vector<string>::const_iterator it = v7.cbegin() ; it != v7.cend() ; ++it )
            cout << *it << " " ;
        cout << endl;
    }
    else
        cout << "v7û��Ԫ�ء�" << endl;

    return 0;
}
