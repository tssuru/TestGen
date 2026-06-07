try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 1;
        y+= 4;
        return x;
    }
    
    int main(){
        int a = 5, b = 3;
        a = f(a, b);
        cout << a << ":" << b <<':';
        {
            int a = 8, b = 6;
            cout << ((b<3) || ((a+=1) <= 5)) << ':';
            cout << a << ":" << b << ':';
        }
        {
            int a = 7;
            cout << a << ':';
        }
        cout << a << ":" << b << endl;
        return 0;
    }
    
except: print('error')
