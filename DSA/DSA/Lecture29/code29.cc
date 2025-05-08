/// DYNAMIC MEMORY ALLOCATION OF 2D ARRAY

// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3ZPZGpGMm1fSlZYcnVwTGU3T01qZDQ2T0pEQXxBQ3Jtc0tsdHpMT3o5eFVLVlp5ZkZwR3NmR2FDbjVuZlptN0JFSlloU0dwd2FPWTBrMVIydWdCc3pXN1VNNGZyZXowY3B0N0RFejF1YUZTbmdPckoxYXA1UDZqWEkyd0staks4dWJoN3BUS1RTdXRPajFkUDFMNA&q=https%3A%2F%2Fbit.ly%2F3ewm1TF&v=LlqgWQgm58g

#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"enter row: ";    cin>>row;

    int col;
    cout<<"enter col: "; cin>>col;


    //creating 2d array
    int **arr = new int*[row];

    for (int i = 0; i <row; i++)
    {
        arr[i] = new int[col];
    }
    
    //taking input
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>> arr[i][j];
        }
    }

    //taking output
    cout<<endl;
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory
    for (int i = 0; i <row; i++)
    {
        delete [] arr[i];
    }


    
    

    return 0;
}