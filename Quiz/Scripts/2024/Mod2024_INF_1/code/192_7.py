try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 20;
        if (b)
            c = 5;
        else if (a != 2)
             c = 8;
        else 
            return 2;
        return c;
    }
    
    int main(){
        std::cout << h(-9, 6);
        return 0;
    }
    
except: print('error')
