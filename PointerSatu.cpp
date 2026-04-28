#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "no induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs{1}; // object mhs
    mhs.showNim(); // member akses operator

    mahasiswa &refMhs = mhs; // pointer reference refMhs
    refMhs.nim = 2; // member akses operator
    refMhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer deference pMhs
    pMhs->nim = 3; // member akses operator
    pMhs->showNim();

    return 0;
}