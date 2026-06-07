try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 55;
        if (a)
            return 4;
        if (b < -2)
             c = 5;
        else 
            return 9;
        return c;
    }
    
    int main(){
        std::cout << f(-8, -4);
        return 0;
    }
    
except: print('error')
