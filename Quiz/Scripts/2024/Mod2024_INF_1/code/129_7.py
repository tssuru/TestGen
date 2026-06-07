try:
    #include <iostream>
    
    int h(int c){
        int z = 11;
        if (c) 
            z = 5;
        else if (c == 4)
             return 3;
        else
             return 0;
        return z;
    }
    
    int main(){
        std::cout << h(-3);
        return 0;
    }
    
except: print('error')
