try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 46;
        if (a)
            return 5;
        else if (b != 2)
             c = 1;
        else 
            c = 8;
        return c;
    }
    
    int main(){
        std::cout << h(0, -6);
        return 0;
    }
    
except: print('error')
