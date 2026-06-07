try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 3;
        return x;
    }
    
    int main(){
        int a = 2, b = 4;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 5, b = 7;
            cout << ((a>=7) || ((b+=1) >= 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 1;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
