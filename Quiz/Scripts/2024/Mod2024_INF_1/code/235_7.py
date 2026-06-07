try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 49;
        if (b != -5)
            return 3;
        if (a > -4)
             c = 4;
        else 
            return 8;
        return c;
    }
    
    int main(){
        std::cout << f(3, -8);
        return 0;
    }
    
except: print('error')
