#include<iostream>
using namespace std;
int main()
{
    int num , sq , cube , sqr;
    cout << "Enter the number:";
    cin >> num;

    sq = num * num;
    cube = num * num * num;

    cout <<"Square of number:"<<sq <<endl;
    cout <<"Cube of number:" <<cube;

    return 0;
}
