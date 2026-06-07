try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 41;
        if (b != 1)
            c = 6;
        else if (b < -2)
             return 0;
        else 
            c = 2;
        return c;
    }
    
    int main(){
        std::cout << h(-1, -7);
        return 0;
    }
    
except: print('error')
