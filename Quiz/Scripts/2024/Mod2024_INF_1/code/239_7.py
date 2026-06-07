try:
    #include <iostream>
    
    int g(int a){
        int y = 30;
        if (a) 
            y = 9;
        else if (a != -2)
             return 5;
        else
             y = 1;
        return y;
    }
    
    int main(){
        std::cout << g(9);
        return 0;
    }
    
except: print('error')
