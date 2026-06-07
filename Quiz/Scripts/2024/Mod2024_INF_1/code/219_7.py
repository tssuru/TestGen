try:
    #include <iostream>
    
    int h(int d){
        int x = 17;
        if (d) 
            x = 7;
        if (d > 4)
             x = 6;
        else
             return 1;
        return x;
    }
    
    int main(){
        std::cout << h(4);
        return 0;
    }
    
except: print('error')
