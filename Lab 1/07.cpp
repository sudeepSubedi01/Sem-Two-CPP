// Create a class named time with data members days, hours, minutes, and seconds.
// Use the necessary member function and WAP to add two times and display.
#include<iostream>
using namespace std;
class Time{
    private:
        int d,h,m,s;
    public:
        void getData(){
            cout<<"Enter days, hours, minutes, seconds: ";
            cin>>d>>h>>m>>s;
        }
        void sumData(Time T1, Time T2){
            int s_t, h_t, m_t, d_t;

            s_t = (T1.s + T2.s);
            s = s_t % 60;

            m_t = T1.m + T2.m + s_t /60;
            m = m_t % 60;

            h_t = T1.h + T2.h + m_t / 60;
            h = h_t % 24;

            d_t = T1.d + T2.d + h_t / 24;
            d = d_t;


            // s = (T1.s + T2.s) % 60;
            // m = (T1.m + T2.m + (T1.s + T2.s) / 60 ) % 60;
            // h = (T1.h + T2.h + (T1.m + T2.m + (T1.s + T2.s) / 60 ) / 60) % 24 ;
            // d = (T1.d + T2.d) + (T1.h + T2.h + (T1.m + T2.m + (T1.s + T2.s) / 60 ) / 60) / 24;
        }
        void displayData(){
            cout<<"Days="<<d<<"\tHours="<<h<<"\tMinutes="<<m<<"\tSeconds="<<s<<endl;
        }
};
int main(){
    Time T1, T2, T3;
    T1.getData();
    T2.getData();
    T3.sumData(T1,T2);
    T1.displayData();
    T2.displayData();
    T3.displayData();
    return 0;
}
