try:
    #include <iostream>
    
    int h(int c){
        int w = 23;
        if (c) 
            w = 7;
        else if (c < 3)
             return 8;
        else
             w = 1;
        return w;
    }
    
    int main(){
        std::cout << h(8);
        return 0;
    }
    
except: print('error')
