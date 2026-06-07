try:
    #include <iostream>
    
    int h(int b){
        int x = 82;
        if (b) 
            return 4;
        else if (b == -5)
             x = 1;
        else
             x = 2;
        return x;
    }
    
    int main(){
        std::cout << h(-4);
        return 0;
    }
    
except: print('error')
