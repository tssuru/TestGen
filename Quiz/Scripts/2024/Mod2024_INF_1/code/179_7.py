try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 59;
        if (b > -5)
            c = 6;
        if (a < -2)
             c = 4;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << f(1, -6);
        return 0;
    }
    
except: print('error')
