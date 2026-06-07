try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 5;
        return x;
    }
    
    int main(){
        int a = 1, b = 4;
        b = f(b, b);
        cout << a << ":" << b <<':';
        {
            int a = 9, b = 8;
            cout << ((a>=5) && ((b+=1) >= 6)) << ':';
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
