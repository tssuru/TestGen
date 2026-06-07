try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(9) or f(-5))
    
except: print('error')
