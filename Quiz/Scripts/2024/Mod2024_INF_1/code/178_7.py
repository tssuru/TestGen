try:
    #include <iostream>
    
    int h(int a, int b){
        int c = 60;
        if (a)
            return 7;
        else if (b >= 4)
             c = 5;
        else 
            return 8;
        return c;
    }
    
    int main(){
        std::cout << h(8, 7);
        return 0;
    }
    
except: print('error')
