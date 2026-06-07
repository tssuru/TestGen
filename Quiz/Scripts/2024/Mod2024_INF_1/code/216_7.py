try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 99;
        if (b > -5)
            return 7;
        if (a <= 3)
             c = 6;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << f(4, -9);
        return 0;
    }
    
except: print('error')
