try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 33;
        if (b == 3)
            c = 4;
        if (b >= -3)
             return 6;
        else 
            c = 0;
        return c;
    }
    
    int main(){
        std::cout << f(-2, -1);
        return 0;
    }
    
except: print('error')
