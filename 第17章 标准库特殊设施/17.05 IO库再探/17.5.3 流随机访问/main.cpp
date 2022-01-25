// ������������֤�̲���17.5.3�����ݵĿɿ��ԣ����ṩ������֪
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()                                                   // ��ƪ�����в��ٿӣ������ע�⣡����ǰ���!!!�Ķ��ǽ̲�û�ἰ��ʵ��ϸ�ڣ�����Ľ������£�
{   /*
    ostringstream writeStr ;                                 // 1.д�������ļ�Ӧ��ʹ��ofstream�࣬�ļ��Ĵ�ģʽһ��Ҫ��binary���������Ĳ���binary, �ļ�����ASCII��ʽ�򿪣�
    ostringstream::pos_type mark = writeStr.tellp() ;        // 2.����������ļ��ĸ�ʽΪdat��������������ǰ���õ�txt��ʽ�������ļ�����Ϊ��dat��
    writeStr.seekp( mark ) ;                                 // 3.����seekg�뺯��tellg���ĵ��ж�λĳ�кܿ��ܲ���ȷ��������ʹ��tellg��seekg���϶�λ��ǰ���ǣ��ĵ����Զ�������ʽ�򿪵ģ���std::ios::binary������ϵͳÿ�ζ��ĵ��еķ��ŵĽ����ͬ����˻���ʹseekg(pos)ʱ�����ܶ�λ����Ҫ��λ�ã�
    */

    fstream inOut( "copyOut.dat" , fstream::ate | fstream::in | fstream::out | fstream::binary ) ; // !!��in��out��ʾ�Զ�д��ʽ�򿪣�ate��ʾ������λ���ļ�ĩβ��binary��ʾ�Զ����Ʒ�ʽ����IO
    if( !inOut ){                                       // !!!�����ļ������ݳ��˽̲��ϵ���Щ��ĸ���⣬�����j��ֻ����һ�����У���ÿ��ʵ��ǰ�ǵ��������ò��ܹ��õ���̲�Ŀ����ͬ�Ĵ���
        cerr << "Unable to open file!" << endl;
        return EXIT_FAILURE ;                           // EXIT_FAILURE��ʾ����ͨ�õ�ʧ���˳�������
    }
    fstream::pos_type end_mark = inOut.tellg() ;        // autoָ������һ���±�������λ�ã���仰����סԭ�ļ�βλ��
    inOut.seekg( 0 , fstream::beg ) ;                   // �ض�λ���ļ���ʼ
    size_t cnt = 0 ;                                    // �ֽ����ۼ���
    string line ;                                       // ���������е�ÿ��
    while( inOut && inOut.tellg() != end_mark && getline( inOut , line ) ){     // �һ����Ի�ȡһ������
        cnt += line.size() ;                            // !!!�̲���˵+1��ʾ���з������Ǵ˴�������Ҫ+1����Ϊ����size��ʱ���Ѿ��ӹ���
        fstream::pos_type mark = inOut.tellg() ;        // ��ס�������Ķ�ȡλ��
        inOut.seekp( 0 , fstream::end ) ;              // ��д����ƶ����ļ�β
        inOut << cnt ;                                  // ����ۼƳ���
        if( mark != end_mark )                          // �������һ�У���ӡһ���ָ���
            inOut << " " ;
        inOut.seekg( mark ) ;                           // �ָ�����λ��
    }
    inOut.seekp( 0 , fstream::end ) ;                  // ��λ���ļ�β
    inOut << "\n" ;                                     // ���ļ�β���һ�����з�
    return EXIT_SUCCESS;
}
