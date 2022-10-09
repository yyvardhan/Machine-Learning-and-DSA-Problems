#include<iostream>
using namespace std;
int main()
{
    string A;
    cin>>A;
    string B = "";
    for(int i=A.length()-1; i>=0; i--)
        B += A[i];
    int n= A.length();
    int dp[n+1][n+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if(A[i-1] == B[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout<<"length of longest palindromic subsequence in given input is : "<<dp[n][n];
}