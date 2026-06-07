try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 42;
        if (a <= -4)
            return 2;
        else if (b == 1)
             return 9;
        else 
            c = 8;
        return c;
    }
    
    int main(){
        std::cout << f(9, -3);
        return 0;
    }
    
except: print('error')
