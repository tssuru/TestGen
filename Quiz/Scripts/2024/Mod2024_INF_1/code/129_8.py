try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y-= 2;
        return x;
    }
    
    int main(){
        int a = 4, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 3, b = 5;
            cout << ((b<5) || ((a+=1) < 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
