// ������������֤��������ϰ2.42�е��뷨�����ڱ�Ҫ�ĵط�����˵��
#include "Sales_data.h"

int main() {
    Sales_data book ;
    cout << "���������ۼ�¼��" << endl;
    while( cin >> book )
        cout << "ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ۷ֱ�Ϊ" << book << endl;

    Sales_data trans1 , trans2 ;
    cout << "����������ISBN��ͬ�����ۼ�¼��" << endl;
    cin >> trans1 >> trans2 ;
    if( compareIsbn( trans1 , trans2 ) )
        cout << "������Ϣ��ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ۷ֱ�Ϊ " << trans1 + trans2 << endl;
    else
        cerr << "�������ۼ�¼��ISBN��ͬ��" << endl;

    Sales_data total , trans ;
    cout << "�����뼸��ISBN��ͬ�����ۼ�¼��" << endl;
    if( cin >> total ){
        while( cin >> trans ){
            if( compareIsbn( total , trans ) )
                total += trans ;
            else
                cerr << "��ǰ�鼮��ISBN��Ϣ��ͬ��" << endl;
            break;
        }
        cout << "��Ч������Ϣ��ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ" << total << endl;
    }else{
        cerr << "û�����ݡ�" << endl;
        return -1 ;
    }

    int num = 1 ;
    cout << "�������������ۼ�¼��" << endl;
    if( cin >> trans1 ){
        while( cin >> trans2 )
            if( compareIsbn( trans1 ,trans2 ) )
                num++ ;
            else{
                cout << trans1.isbn() << "����" << num << "�����ۼ�¼��" << endl;
                trans1 = trans2 , num = 1;
            }
        cout << trans1.isbn() << "����" << num << "�����ۼ�¼" << endl;
    }
    else{
        cerr << "û�����ݣ�" << endl;
        return -1 ;
    }
    return 0;
}
