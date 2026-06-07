try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-9) or f(-3))
    
except: print('error')
