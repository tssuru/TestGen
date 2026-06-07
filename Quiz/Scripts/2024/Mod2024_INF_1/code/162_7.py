try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 82;
        if (a != 1)
            return 8;
        else if (a >= -2)
             c = 7;
        else 
            return 3;
        return c;
    }
    
    int main(){
        std::cout << f(-6, 2);
        return 0;
    }
    
except: print('error')
