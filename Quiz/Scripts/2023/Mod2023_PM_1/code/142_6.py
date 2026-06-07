try:
    
    def f(n):
        print("f", end="");
        return n==1
    
    print(f(0) or f(-4))
    
except: print('error')
