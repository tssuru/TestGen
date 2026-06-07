try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 64;
        if (b != 4)
            return 1;
        else if (a >= 5)
             return 3;
        else 
            c = 2;
        return c;
    }
    
    int main(){
        std::cout << h(-5, 9);
        return 0;
    }
    
except: print('error')
