try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 86;
        if (b)
            c = 6;
        if (b < -1)
             return 2;
        else 
            c = 3;
        return c;
    }
    
    int main(){
        std::cout << f(-5, -4);
        return 0;
    }
    
except: print('error')
