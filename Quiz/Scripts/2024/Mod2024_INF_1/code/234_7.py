try:
    #include <iostream>
    
    int h(int c){
        int w = 52;
        if (c <= 1) 
            w = 2;
        else if (c != 0)
             return 3;
        else
             w = 6;
        return w;
    }
    
    int main(){
        std::cout << h(2);
        return 0;
    }
    
except: print('error')
