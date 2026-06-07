try:
    
    def f(n):
        print("f", end="");
        return n<-1
    
    print(f(-8) or f(1))
    
except: print('error')
