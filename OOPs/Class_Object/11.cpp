
#include<iostream>
using namespace std;

class Matrix{
    int arr1[2][2] = {{1 , 2} , {3 , 4}};
    int arr2[2][2] = {{5 , 6} , {7 , 8}};
    int c[2][2] = {0};
    int d[2][2];

    public:
    void display(){
        int i,j;
        cout << "array 1: " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << "array2: " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
    void addition(){
        int i,j;
        cout << endl << "The addition :- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = arr1[i][j] + arr2[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void substraction(){
        int i,j;
        cout << endl << "The substraction :- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = arr1[i][j] - arr2[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void multiplication(){
        int i,j,k;
        cout << endl << "The multiplication :- " << endl ;
       for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                c[i][j] = 0;
                for(k=0;k<2;k++){
                    c[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    void transpose(){
        int i,j;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                d[i][j] = arr1[j][i];
            }
        }
        cout << endl << "The transpose :- " << endl;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cout << d[i][j] << " ";
            }
            cout << endl ;
        }
    }
};

int main(){
        Matrix m;
        m.display();
        m.addition();
        m.substraction();
        m.multiplication();
        m.transpose();
        return 0;
}
