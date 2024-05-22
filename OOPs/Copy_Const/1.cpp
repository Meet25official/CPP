// 1. Create a class representing a musical playlist with a dynamic array of song objects. Implement a copy constructor to ensure a deep copy of the playlist, including all song details.

#include<iostream>

using namespace std;

class Musical {
    string mname;
    string playlist[5];

    public:
    Musical(string m,string p[]){
        mname = m;
        for(int i=0 ; i<5;i++){
            playlist[i] = p[i];
        }
    }

    Musical(Musical &obj) {
        mname = obj.mname;
        for(int i=0;i<5;i++){
            playlist[i] = obj.playlist[i];
        }
    }
    void display(){
        cout << "Mname : " << endl;
        cout << "Starring : ";
        for (int i = 0; i < 5; i++)
        {
            cout << playlist[i] << ", ";
        }
        cout << endl;
    }
};

int main(){
    string p[] = {"xyz","abc","pqr"};
    Musical a("abcd",p);
    Musical b(a);

    a.display();
    b.display();

    return 0;
}