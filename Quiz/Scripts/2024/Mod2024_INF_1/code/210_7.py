try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 79;
        if (a <= 4)
            c = 5;
        if (b < -1)
             return 1;
        else 
            c = 6;
        return c;
    }
    
    int main(){
        std::cout << f(2, 3);
        return 0;
    }
    
except: print('error')
