try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 16;
        if (a != 3)
            return 6;
        if (b < -1)
             c = 0;
        else 
            c = 0;
        return c;
    }
    
    int main(){
        std::cout << f(-4, -2);
        return 0;
    }
    
except: print('error')
