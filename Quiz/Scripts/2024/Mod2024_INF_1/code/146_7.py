try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 65;
        if (b > -5)
            c = 4;
        if (b < -1)
             return 1;
        else 
            return 8;
        return c;
    }
    
    int main(){
        std::cout << h(-7, 8);
        return 0;
    }
    
except: print('error')
