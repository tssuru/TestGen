try:
    #include <iostream>
    
    int h(int b){
        int y = 47;
        if (b >= -3) 
            y = 0;
        if (b > 5)
             return 4;
        else
             y = 9;
        return y;
    }
    
    int main(){
        std::cout << h(-5);
        return 0;
    }
    
except: print('error')
