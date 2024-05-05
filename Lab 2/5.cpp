// Create a class named vector with necessary data members. Initialize all data members usingconstructors 
// and use necessary member functions to calculate the sum of two vectors and display the result in main().

#include<iostream>
using namespace std;

class Vector{
    private:
        int i,j;
    public:
        Vector(){
            i = j =0;
        }
        Vector(int i_p,int j_p){
            i= i_p;
            j= j_p;
        }
        Vector processData(Vector v2){
            Vector v;
            v.i = i + v2.i;
            v.j = j + v2.j;
            return v;
        }
        void displayData(){
            cout<<i<<" i + "<<j<<" j"<<endl;;
        }
};

int main(){
    Vector v1(5,6);
    Vector v2(2,1);
    Vector v3 = v1.processData(v2);

    cout<<"First vector = ";
    v1.displayData();
    cout<<"Second vector = ";
    v2.displayData();
    cout<<"Resultant vector = ";
    v3.displayData();
    return 0;
}