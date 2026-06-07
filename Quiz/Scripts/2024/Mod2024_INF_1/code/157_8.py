try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 8;
        y+= 9;
        return x;
    }
    
    int main(){
        int a = 3, b = 5;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 2;
            cout << ((a<=4) && ((b+=1) <= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 9;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
