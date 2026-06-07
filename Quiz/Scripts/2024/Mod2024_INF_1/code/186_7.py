try:
    #include <iostream>
    
    int h(int c){
        int y = 39;
        if (c != 5) 
            return 2;
        else if (c <= 0)
             y = 5;
        else
             y = 8;
        return y;
    }
    
    int main(){
        std::cout << h(-9);
        return 0;
    }
    
except: print('error')
