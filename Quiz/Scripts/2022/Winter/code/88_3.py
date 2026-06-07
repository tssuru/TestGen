try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(0) or f(-3))
    
except: print('error')
