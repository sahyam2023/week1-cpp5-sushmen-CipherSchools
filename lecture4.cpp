#include<bits/stdc++.h>
using namespace std;
//iterative fun
//int power(int base, int pow)
//{
//int num=1;
//for(int i=0; i<pow,i++){
//}
//recursive fun

int power(int base, int pow){
    if(pow==0)
        return 1;
        int Smlans = power(base, pow-1); //mlAns -> 2^2
        return Smlans*base;
    
}
int main()
{
    cout<<power(2,3);
    return 0;
}
