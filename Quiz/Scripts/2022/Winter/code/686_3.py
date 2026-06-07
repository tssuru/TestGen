try:
    
    def f(n):
        print("f", end="");
        return n<4
    
    print(f(-6) or f(4))
    
except: print('error')
