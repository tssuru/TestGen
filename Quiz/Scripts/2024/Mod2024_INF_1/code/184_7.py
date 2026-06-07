try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 47;
        if (b == 5)
            return 4;
        else if (a <= -1)
             c = 5;
        else 
            return 2;
        return c;
    }
    
    int main(){
        std::cout << f(-6, -9);
        return 0;
    }
    
except: print('error')
