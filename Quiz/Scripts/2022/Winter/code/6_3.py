try:
    
    def f(n):
        print("f", end="");
        return n!=1
    
    print(f(-9) or f(0))
    
except: print('error')
