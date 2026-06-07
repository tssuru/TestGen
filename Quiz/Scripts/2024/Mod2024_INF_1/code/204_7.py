try:
    #include <iostream>
    
    int f(int a, int b){
        int c = 68;
        if (b)
            return 2;
        else if (a != 5)
             c = 1;
        else 
            c = 5;
        return c;
    }
    
    int main(){
        std::cout << f(-1, 4);
        return 0;
    }
    
except: print('error')
