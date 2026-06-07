try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 39;
        if (b < 5)
            return 5;
        if (a > -4)
             c = 6;
        else 
            c = 8;
        return c;
    }
    
    int main(){
        std::cout << h(1, 3);
        return 0;
    }
    
except: print('error')
