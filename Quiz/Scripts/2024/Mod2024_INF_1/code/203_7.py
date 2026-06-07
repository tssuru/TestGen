try:
    #include <iostream>
    
    int h(int c){
        int x = 96;
        if (c <= 1) 
            x = 9;
        if (c == 3)
             return 0;
        else
             x = 1;
        return x;
    }
    
    int main(){
        std::cout << h(8);
        return 0;
    }
    
except: print('error')
