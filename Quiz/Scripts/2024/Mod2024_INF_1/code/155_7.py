try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 71;
        if (b >= 4)
            return 6;
        if (a <= 3)
             c = 1;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << f(-2, -7);
        return 0;
    }
    
except: print('error')
