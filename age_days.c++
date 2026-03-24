#include <iostream>
using namespace std;

int main() {
    
    int n , years , remain_1 , months , remain_2 , days ;
    cin >> n ;
    years = n / 365 ;
    remain_1 = n % 365 ;
    months = remain_1 / 30 ;
    remain_2 =remain_1 % 30 ;
    days = remain_2 ;

    cout << years << " years" << endl ;
    cout << months << " months"<< endl ;
    cout << days << " days" << endl ;






    return 0;
}