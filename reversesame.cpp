// reverse a no. using a reverse function 
#include<iostream>
using namespace std;

int reverse(int no) {

    int ld;
    int count = 0;

    while (no > 0) {
        ld = no % 10;
        count = count * 10 + ld;
        no = no / 10;
    }
    return count;
}

int main() {

    int no, count;

    cin>>no;

    count = reverse(no);
    cout<<count;

    return 0;
}