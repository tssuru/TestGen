try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 3;
        return x;
    }
    
    int main(){
        int a = 1, b = 5;
        b = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 9;
            cout << ((a<5) && ((b+=1) <= 7)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
