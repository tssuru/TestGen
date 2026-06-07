try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 93;
        if (a < 5)
            c = 8;
        if (b != 2)
             c = 4;
        else 
            return 1;
        return c;
    }
    
    int main(){
        std::cout << h(-8, -1);
        return 0;
    }
    
except: print('error')
