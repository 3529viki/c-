#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch;
    
    if(ch>=65 && ch<=90){
        cout<< "UPPERCASE"<<endl;
    }
    else if (ch>=97 && ch<=122){
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    
    return 0;
}


/* another method using isupper and islower predefined functions no header file is used for this function


#include <iostream>
using namespace std;

int main() {
    char ch;

    cin >> ch;
    
    if(isupper(ch)){
        cout<< "UPPERCASE"<<endl;
    }
    else if (islower(ch)){
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"invalid"<<endl;
    }
    
    return 0;
}                
               */