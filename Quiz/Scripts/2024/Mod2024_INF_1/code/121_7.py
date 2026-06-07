try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 24;
        if (b < -1)
            c = 3;
        if (a >= 4)
             return 7;
        else 
            c = 6;
        return c;
    }
    
    int main(){
        std::cout << h(-6, -1);
        return 0;
    }
    
except: print('error')
