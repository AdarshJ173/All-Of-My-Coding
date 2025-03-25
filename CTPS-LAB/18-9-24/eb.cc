// 18-9-24

#include<bits/stdc++.h>
using namespace std;

int main() {
    int myUnit;
    cout << "Enter your unit: ";
    cin >> myUnit;

    int unitSpace = 100;

    int rs1 = 1;
    int rs2 = 1.5;
    int rs3 = 3;
    int rs4 = 5;

    int cost1 = unitSpace * rs1;
    int cost2 = unitSpace * rs2;
    int cost3 = unitSpace * rs3;
    int cost4 = unitSpace * rs4;

    int totalCost = 0;

    if(myUnit <= 0) {
        cout << "Invalid unit. Please enter a value greater than 0." << endl;
    } else if(myUnit <= 100){
        totalCost = cost1;
    }
    else if (myUnit <= 200){
        totalCost = cost1 + cost2;
    }
    else if (myUnit <= 300){
        totalCost = cost1 + cost2 + cost3;
    }
    else {
        totalCost = cost1 + cost2 + cost3 + cost4;
        int extraUnits = myUnit - 300;
        totalCost += (extraUnits / 100) * cost4;
        if(extraUnits % 100 != 0) {
            totalCost += (extraUnits % 100) * rs4;
        }
    }

    cout << totalCost << endl;

    return 0;
}