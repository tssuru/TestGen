try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 61;
        if (a)
            c = 0;
        else if (b >= -3)
             return 7;
        else 
            c = 1;
        return c;
    }
    
    int main(){
        std::cout << h(-5, 4);
        return 0;
    }
    
except: print('error')
