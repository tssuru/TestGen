try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 6, b = 8;
        a = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 9;
            cout << ((b<=6) && ((a+=1) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 3;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
