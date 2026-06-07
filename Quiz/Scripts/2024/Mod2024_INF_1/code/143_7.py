try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 80;
        if (a)
            return 7;
        if (b == 1)
             c = 0;
        else 
            c = 9;
        return c;
    }
    
    int main(){
        std::cout << f(-3, 4);
        return 0;
    }
    
except: print('error')
