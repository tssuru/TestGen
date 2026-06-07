try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 91;
        if (a <= 3)
            return 7;
        else if (b >= 0)
             return 2;
        else 
            c = 1;
        return c;
    }
    
    int main(){
        std::cout << f(8, 0);
        return 0;
    }
    
except: print('error')
