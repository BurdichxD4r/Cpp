#include <iostream>
#define N 1000
using namespace std;
/*Задание 42.12*/
void create_mass_time(int n, float time[], float &dt)
{
    float tn = 10, tk = 35, dt;
    dt = (tk - tn) / (n - 1);
    for (int i = 0; i < n; i++)
    {
        t[i] = tn + i * dt;
    }
    
}

float impuls(int n, float U[], dt)
{
    float Umax = U[0];
    float Umin = U[0];
    for (int i = 0; i < n; i++)
    {
        if (U[i] < Umin) Umin = U[i];
        if (U[i] > Umax) Umax = U[i];
    }
    float     
}

float Umax

int main()
{
    float t(N), Uvx(N), Uvix(N);
    int n, i;
    setlocale(LC_ALL, "rus");
    cout<<"Введите n: "<<endl;
    cin>>n;
    massiv_t(n, t, dt);
    massiv_Uvx(n, t, Uvx);
    massiv_Uvix(n, t, Uvix);
    massiv_print(n, t, Uvx, Uvix);
    return 0;
}