try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 70;
        if (b == -5)
            c = 2;
        if (b < -4)
             c = 4;
        else 
            return 8;
        return c;
    }
    
    int main(){
        std::cout << h(7, -6);
        return 0;
    }
    
except: print('error')
