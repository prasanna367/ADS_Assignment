#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    cin>>a>>b;
    int count=0;
    int sum=b;
    while(sum<=a)
    {
        count++;
        sum=sum+b;
    }
    cout<<a+count;
    
    
    
    return 0;
}
