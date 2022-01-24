// 本程序用于验证读者在练习7.31中的想法，并在必要的地方予以说明

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
