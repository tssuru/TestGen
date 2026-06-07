try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 2, b = 5;
        a = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 2;
            cout << ((b>=7) || ((a+=1) > 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
