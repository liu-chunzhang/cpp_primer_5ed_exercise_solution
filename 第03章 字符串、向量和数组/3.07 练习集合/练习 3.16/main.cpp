// ������������֤��������ϰ3.16�е��뷨�����ڱ�Ҫ�ĵط�����˵����������ϰ3.13�Ĵ�
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 ;
    cout << "v1��Ԫ�ظ����ǣ�" << v1.size() << endl;
    if( v1.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v1��Ԫ�طֱ��ǣ�" ;
        for( auto i : v1 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v1û��Ԫ�ء�" << endl;

    vector<int> v2( 10 ) ;
    cout << "v2��Ԫ�ظ����ǣ�" << v2.size() << endl;
    if( v2.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v2��Ԫ�طֱ��ǣ�" ;
        for( auto i : v2 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v2û��Ԫ�ء�" << endl;

    vector<int> v3( 10 , 42 ) ;
    cout << "v3��Ԫ�ظ����ǣ�" << v3.size() << endl;
    if( v3.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v3��Ԫ�طֱ��ǣ�" ;
        for( auto i : v3 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v3û��Ԫ�ء�" << endl;

    vector<int> v4{ 10 };
    cout << "v4��Ԫ�ظ����ǣ�" << v4.size() << endl;
    if( v4.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v4��Ԫ�طֱ��ǣ�" ;
        for( auto i : v4 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v4û��Ԫ�ء�" << endl;

    vector<int> v5{ 10 , 42 };
    cout << "v5��Ԫ�ظ����ǣ�" << v5.size() << endl;
    if( v5.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v5��Ԫ�طֱ��ǣ�" ;
        for( auto i : v5 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v5û��Ԫ�ء�" << endl;

    vector<string> v6{ 10 };
    cout << "v6��Ԫ�ظ����ǣ�" << v6.size() << endl;
    if( v6.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v6��Ԫ�طֱ��ǣ�" ;
        for( auto i : v6 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v6û��Ԫ�ء�" << endl;

    vector<string> v7{ 10 , "Hi" } ;
    cout << "v7��Ԫ�ظ����ǣ�" << v7.size() << endl;
    if( v7.size() > 0 ){                                   // ��vector����Ԫ��ʱ������
        cout << "v7��Ԫ�طֱ��ǣ�" ;
        for( auto i : v7 )                                  // ʹ�÷�Χfor������ÿһ��Ԫ��
            cout << i << " " ;
        cout << endl;
    }
    else
       cout << "v7û��Ԫ�ء�" << endl;

    return 0;
}
