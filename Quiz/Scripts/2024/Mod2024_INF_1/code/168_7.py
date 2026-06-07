try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 22;
        if (b <= 2)
            return 4;
        else if (a > 0)
             return 1;
        else 
            c = 8;
        return c;
    }
    
    int main(){
        std::cout << h(0, -9);
        return 0;
    }
    
except: print('error')
