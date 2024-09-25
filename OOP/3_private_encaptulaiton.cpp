
#include<bits/stdc++.h>
using namespace std;

class MyClass{

    private:
        int private_value ;

        void display_private_value(){
            cout << "This is private method with private_value : " << private_value << endl ;

        }

    public:
        int public_value;
        MyClass(int pub_value, int pri_value){
            public_value = pub_value;
            private_value = pri_value;
        }

        void display_public_value(){
            cout << "Public value is : " << public_value << endl;
        }

        void access_private_value(){
            // cout << "This is private value : " << private_value << endl;
            display_private_value();
        }



};

int main(){

    MyClass a(10,20);
    a.display_public_value();
    // a.display_private_value();  //this is not accessible like this cause this is private
    a.access_private_value();

}