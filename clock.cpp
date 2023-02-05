#include <iostream>
#include <ctime>
using namespace std;
void pause(int dur){
    int temp=dur+time(NULL);
    while(temp>time(NULL));
}
int main(){
    int h,m,s;
    h=0;
    m=0;
    s=0;
    bool test=true;
   do {
    s=s+1;
    pause(1);
    if(s>60){
        s=0;
        m=m+1;
    }
    if(m>60){
        h=h+1;
    }
    if(h>24){
        h=0;
    }
    cout<<h<<":"<<m<<":"<<s<<endl;
    
   }while(test=true);
}