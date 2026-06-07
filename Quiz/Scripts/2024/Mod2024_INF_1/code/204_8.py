try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 5;
        y+= 5;
        return y;
    }
    
    int main(){
        int a = 1, b = 6;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 2, b = 9;
            cout << ((a>4) && ((b+=1) >= 5)) << ':';
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
