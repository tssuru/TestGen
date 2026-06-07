try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 9;
        return y;
    }
    
    int main(){
        int a = 2, b = 3;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 7;
            cout << ((b<=7) || ((a+=1) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
