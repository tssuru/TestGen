try:
    #include <iostream>
    
    int h(int a){
        int y = 77;
        if (a) 
            return 8;
        else if (a < -5)
             return 6;
        else
             y = 1;
        return y;
    }
    
    int main(){
        std::cout << h(-5);
        return 0;
    }
    
except: print('error')
