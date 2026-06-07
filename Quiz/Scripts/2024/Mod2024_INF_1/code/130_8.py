try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y+= 1;
        return x;
    }
    
    int main(){
        int a = 6, b = 7;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 4, b = 8;
            cout << ((b<=5) && ((a+=1) > 6)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 6;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
