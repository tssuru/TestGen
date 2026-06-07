try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 31;
        if (b >= 4)
            return 4;
        if (b > -3)
             return 8;
        else 
            c = 1;
        return c;
    }
    
    int main(){
        std::cout << f(-8, 9);
        return 0;
    }
    
except: print('error')
