try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n==4;
    }
    
    int main(){
        std::cout<<(f(9) and f(-9));
        return 0;
    }
    
except: print('error')
