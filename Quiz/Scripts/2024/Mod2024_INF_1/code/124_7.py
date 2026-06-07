try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 97;
        if (b)
            c = 0;
        else if (a <= -3)
             return 1;
        else 
            c = 4;
        return c;
    }
    
    int main(){
        std::cout << f(-9, -2);
        return 0;
    }
    
except: print('error')
