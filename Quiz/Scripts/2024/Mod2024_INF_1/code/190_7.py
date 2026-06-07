try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 76;
        if (b == 1)
            return 4;
        if (a <= 0)
             c = 3;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << f(5, -3);
        return 0;
    }
    
except: print('error')
