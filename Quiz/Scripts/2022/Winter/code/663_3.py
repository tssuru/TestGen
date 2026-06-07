try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-8) or f(0))
    
except: print('error')
