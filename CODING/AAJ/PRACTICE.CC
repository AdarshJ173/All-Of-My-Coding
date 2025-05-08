#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 1;

    while (count <= n) {
        cout << count << " "<<endl;
        count++; // count = count + 1 ;
    }

    //! Pattern practice

    int num;
    cout<<"Enter NUM: "; cin>>num;

    int row = 1;

    while (row<=num)
    {
       int col = 1;
        while (col<=num)
        {
            cout<<col<<" ";
            col++;
        }
       cout<<endl;
       row++;
    }
    
    
    int inTrngl;
    cout<<"Enter NUM: "; cin>>inTrngl;

    int row1 = 1;

    while (row1<=inTrngl)
    {
       int col1 = 1;
        while (col1<=row1)
        {
            cout<<col1<<" ";
            col1++;
        }
       cout<<endl;
       row1++;
    }
    
    

}






















































