try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 35;
        if (b >= 4)
            return 7;
        if (a > 3)
             return 6;
        else 
            c = 4;
        return c;
    }
    
    int main(){
        std::cout << f(-6, 5);
        return 0;
    }
    
except: print('error')
