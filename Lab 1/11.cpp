// Returning Object: Create a class named time with data members days, hours, minutes, and seconds.
// Use the necessary member function and WAP to add two times and display the result in main().

#include <iostream>
using namespace std;

class Time
{
    private:
        int d, h, m, s;
    public:
        void getData(){
            cout<<"Enter days, hours, minutes, seconds: ";
            cin>>d>>h>>m>>s;
        }
        Time processData(Time T2){
            Time T;
            int s_t, h_t, m_t, d_t;

            s_t = (s + T2.s);
            T.s = s_t % 60;

            m_t = m + T2.m + s_t /60;
            T.m = m_t % 60;

            h_t = h + T2.h + m_t / 60;
            T.h = h_t % 24;

            d_t = d + T2.d + h_t / 24;
            T.d = d_t;
            return T;
        }
        void displayData(){
            cout<<"Days="<<d<<"\tHours="<<h<<"\tMinutes="<<m<<"\tSeconds="<<s<<endl;
        }


};

int main(){
    Time T1 ,T2, T3;
    T1.getData();
    T2.getData();
    T3 = T1.processData(T2);
    cout<<"The sum of two times is: ";
    T3.displayData();
    return 0;
}
