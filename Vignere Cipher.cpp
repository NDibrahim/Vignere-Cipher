#include <iostream>
using namespace std;
void swap(char &x , char &y );
int main(){
    char s,n;
    cin>>s>>n;
    swap(s,n);
    cout<<"s="<<s<<"\n";
    cout<<"n="<<n<<"\n";

}
void swap(char &x, char &y){
    char temp;
    temp = x;
    x= y;
    y = temp;
}
