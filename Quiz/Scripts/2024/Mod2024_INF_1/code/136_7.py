try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 10;
        if (a)
            c = 8;
        if (a != 0)
             return 9;
        else 
            c = 5;
        return c;
    }
    
    int main(){
        std::cout << h(-3, 5);
        return 0;
    }
    
except: print('error')
