try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 34;
        if (b)
            c = 2;
        else if (a <= 4)
             return 3;
        else 
            return 0;
        return c;
    }
    
    int main(){
        std::cout << f(9, 1);
        return 0;
    }
    
except: print('error')
