try:
    #include <iostream>
    using namespace std;
    
    int f(int &x, int &y){
        x = 9;
        y+= 5;
        return y;
    }
    
    int main(){
        int a = 4, b = 7;
        a = f(b, a);
        cout << a << ":" << b <<':';
        {
            int a = 6, b = 1;
            cout << ((b<6) && ((a+=1) <= 6)) << ':';
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
