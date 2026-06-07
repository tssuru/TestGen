try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 6;
        y+= 8;
        return y;
    }
    
    int main(){
        int a = 3, b = 9;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 1, b = 5;
            cout << ((b<3) && ((a+=1) < 3)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 4;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
