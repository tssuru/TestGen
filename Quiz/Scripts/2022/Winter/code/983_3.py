try:
    
    def f(n):
        print("f", end="");
        return n!=0
    
    print(f(1) or f(-6))
    
except: print('error')
