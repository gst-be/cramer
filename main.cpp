#include <iostream>
#include "det.cpp"
#define MAX 30

double calc(double a[MAX][MAX],double b[MAX],int n,int t)
{
    double c[MAX][MAX];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==t)
                c[i][j]=b[i];
            else
                c[i][j]=a[i][j];
        }
    }
    return det(c,n);
}

int main() {
    double a[MAX][MAX];
    double b[MAX];
    int n;
    cout<<"Input n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
        cout<<"b["<<i<<"]=";
        cin>>b[i];
    }

    for(int t=0;t<n;t++)
    {
        cout<<"x["<<t<<"]="<<calc(a,b,n,t)/det(a,n)<<endl;
    }
    return 0;
}
