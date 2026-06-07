try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 52;
        if (a != 1)
            return 5;
        else if (a > -4)
             c = 7;
        else 
            return 6;
        return c;
    }
    
    int main(){
        std::cout << f(6, 0);
        return 0;
    }
    
except: print('error')
