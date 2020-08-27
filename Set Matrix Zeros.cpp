// Given an m x n matrix. If an element is 0, set its entire row and column to 0.
#include<bits/stdc++.h>
using namespace std;
void brute(int arr[][4], int r)
{
    cout<<"Brute - "<<endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 0){
                for(int m = 0; m < 4; m++){
                    if(arr[i][m] != 0){
                        arr[i][m] = -1;
                    }
                }
                for(int n = 0; n < r; n++){
                    if(arr[n][j] != 0){
                        arr[n][j] = -1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void better(int arr[][4], int r)
{
    cout<<"Better - "<<endl;
    int row[r];
    int col[4];
    for(int i = 0;i < r; i++){
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 0){
                row[i] = 0;
                col[j] = 0;
            }
        }
    }
    for(int i = 0;i < r; i++){
        for(int j = 0; j < 4; j++){
            if(row[i] == 0 || col[j] == 0){
                arr[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void optimal(int arr[][4], int r)
{
    cout<<"Optimal - "<<endl;
    bool col = true;
    for(int i = 0; i < r; i++){
        if(arr[i][0] == 0){
            col = false;
        }
        for(int j = 0; j < 4; j++){
            if(arr[i][j] == 0){
                arr[i][0] = arr[0][j] = 0;
            }
        }
    }
    for(int i = r - 1; i >= 0; i--){
        for(int j = 3; j >= 1; j--){
            if(arr[i][0] == 0 || arr[0][j] == 0){
                arr[i][j] = 0;
            }
        }
        if(col == false){
            arr[i][0] = 0;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[][4] = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    int r = sizeof(arr)/sizeof(arr[0]);
    //brute(arr, r);
    //better(arr, r); // Use two temp arrays.
    optimal(arr, r); // Use 1st row and 1st column as temp arrray.
    return 0;
}
