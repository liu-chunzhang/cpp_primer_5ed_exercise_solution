// ������������֤��������ϰ7.31�е��뷨�����ڱ�Ҫ�ĵط�����˵��

class Y ;
class X {
    private:
        Y *xToY ;
};

class Y {
    private:
        X Xitem ;
};

int main() {
    X xitem ;
    Y yitem ;
    return 0;
}
