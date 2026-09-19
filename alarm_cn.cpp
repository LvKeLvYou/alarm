#include<iostream>
#include<iomanip>
#include<thread>
#include<chrono>
#include<windows.h>
using namespace std;
static void clock(int d, int h, int m, int s) {
    while (d>0||h>0||m>0||s>0) {
        this_thread::sleep_for(chrono::seconds(1));
        s--;
        cout << "剩余时间: ";
        cout << setw(2) << setfill('0') << d << ":";
        cout << setw(2) << h << ":";
        cout << setw(2) << m << ":";
        cout << setw(2) << s << endl;
        if (s <= 0 && m>0) {
            m--;
            s += 60;
        }
        if (m <= 0&&h>0) {
            h--;
            m += 60; 
        }
        if (h <= 0&&d>0) {
            d--;
            h += 24;
        }
    }
}
int main() {
    int d,h,m,s;
    cout << "请输入要计时久\n"<<"按照格式：DD:HH:MM:SS\n";
    cout << "每种时间之间用空格隔开" << "完成输入请按enter键";
    cout << "注意DD<100,HH<24,MM与SS<60\n";
    cin >> d>>h>>m>>s;
    cout << "剩余时间: ";
    cout << setw(2) << setfill('0') << d << ":";
    cout << setw(2) << h << ":";
    cout << setw(2) << m << ":";
    cout << setw(2) << s << endl;
    clock(d, h, m, s);
    cout << "时间到:>\n";
    Beep(800, 800);
    return 0;
}
