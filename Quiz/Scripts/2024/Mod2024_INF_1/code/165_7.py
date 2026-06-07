try:
    #include <iostream>
    
    int h(int d){
        int x = 13;
        if (d > 0) 
            x = 2;
        if (d <= 4)
             return 5;
        else
             x = 7;
        return x;
    }
    
    int main(){
        std::cout << h(7);
        return 0;
    }
    
except: print('error')
