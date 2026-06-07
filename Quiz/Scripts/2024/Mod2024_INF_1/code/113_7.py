try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 43;
        if (a <= -5)
            c = 6;
        if (b >= 0)
             return 1;
        else 
            return 0;
        return c;
    }
    
    int main(){
        std::cout << f(-4, -9);
        return 0;
    }
    
except: print('error')
