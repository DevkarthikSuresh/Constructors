#include <iostream>
using namespace std;
    int count = 0;
    class student{
    public:

    student(){
        count++;
       
        cout<<"No of objects created: " <<count<<endl;
       
    }
     ~ student(){
        count--;
       
        cout<<"No of objects destroyed: " <<count<<endl;
       
    }
   
};
int main(){
student aa , bb ,cc;
{
    student dd;
}
    return 0;
}
/*
No of objects created: 1
No of objects created: 2
No of objects created: 3
No of objects created: 4
No of objects destroyed: 3
No of objects destroyed: 2
No of objects destroyed: 1
No of objects destroyed: 0
 */
