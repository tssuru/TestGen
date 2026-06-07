try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 45;
        if (a)
            c = 0;
        else if (a != 2)
             c = 3;
        else 
            return 0;
        return c;
    }
    
    int main(){
        std::cout << f(-2, 6);
        return 0;
    }
    
except: print('error')
