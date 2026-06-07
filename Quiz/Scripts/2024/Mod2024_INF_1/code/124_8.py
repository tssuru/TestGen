try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 3;
        b = f(a, a);
        cout << a << ":" << b <<':';
        {
            int a = 7, b = 5;
            cout << ((a>=7) || ((b+=1) > 4)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 2;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
