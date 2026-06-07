try:
    #include <iostream>
    
    bool f(int n){
        std::cout<<"f";
        return n!=0;
    }
    
    int main(){
        std::cout<<(f(7) or f(-1));
        return 0;
    }
    
except: print('error')
