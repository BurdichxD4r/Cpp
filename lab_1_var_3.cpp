#include <iostream>
using namespace std;

void Create_Mass(int n, int Mass[], char ch)
{
    cout<<"Input array "<<ch<<":"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ch<<"["<<i<<"]";
        cin>>Mass[i];
    }
}

int *Mass_x_2(int n, int Mass[])
{
    for (int i = 0; i < n; i++)
    {
        Mass[i] *= 2;
    }
    return Mass;
}

float sred_znach(int n, int Mass[])
{
    float summ = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Mass[i] > 0)
        {
            summ += Mass[i];
            count += 1;
        }
        
    }
    if (count != 0)
    {
        return summ / count;
    }
    else return 0;
}


int main()
{
    int A[4];
    int B[5];
    int C[4];
    Create_Mass(4, A, 'A');
    Create_Mass(5, B, 'B');
    Create_Mass(4, C, 'C');
    cout<<"Среднее значение массива A - "<<sred_znach(4, Mass_x_2(4, A))<<"\n"<<endl;
    cout<<"Среднее значение массива B - "<<sred_znach(5, Mass_x_2(5, B))<<"\n"<<endl;
    cout<<"Среднее значение массива C - "<<sred_znach(4, Mass_x_2(4, C))<<"\n"<<endl;
    return 0;
}