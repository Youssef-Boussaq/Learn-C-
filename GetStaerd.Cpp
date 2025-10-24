#include <iostream>
class Rectancle{
    private:
     int L , H;
    public:
    int getL(){
        return L;
    };
    int getH(){
        return H;
    };
    void setL(int l){
         L=l;
    };
    void setH(int h){
         H=h;
    };

    int Surface(){
        return L*H;
    };

};

int main()
{
    Rectancle r ;
    r.setH(2);
    r.setL(2);

    std::cout <<r.Surface() ;
}
