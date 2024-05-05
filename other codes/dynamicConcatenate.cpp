#include<iostream>
#include<string.h>
using namespace std;

class concatenate{
    private:
        char *str;
    public:
        concatenate(){
            str = new char[1];
            str[0] = '\0';
        }
        concatenate(char *str1){
            str = new char[strlen(str1)+1];
            strcpy(str,str1);            
        }
        void process(concatenate c1, concatenate c2){
            str = new char[strlen(c1.str) + strlen(c2.str) +2];
            strcpy(str, c1.str);
            strcat(str, " ");
            strcat(str, c2.str);
        }
        void show(){
            cout<<"The string is: "<< str <<endl;
        }
        ~concatenate(){
            delete []str;
        }
};
int main(){
    concatenate c1("hello world");
    concatenate c2("this world");
    concatenate c3;
    c3.process(c1,c2);
    c3.show();
    return 0;
}