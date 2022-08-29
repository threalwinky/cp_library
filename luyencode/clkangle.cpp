#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,h;
    cin>>h>>m;
    float h_angle = min(h*30 + (float)m/2, 360-h*30 - (float)m/2);
    float m_angle = min(m * 6, (60-m)*6);
    float angle;
    if ((h>=6&&m>=30) || (h < 6 && m<30)){
        angle = abs(h_angle - m_angle);
    }
    else{
        angle = min(h_angle+m_angle, 360 - h_angle - m_angle);
    }
    cout<<fixed<<setprecision(1)<<angle;
}