try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 3;
        y+= 3;
        return y;
    }
    
    int main(){
        int a = 4, b = 7;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 5;
            cout << ((b>=5) && ((a+=1) <= 4)) << ':';
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
