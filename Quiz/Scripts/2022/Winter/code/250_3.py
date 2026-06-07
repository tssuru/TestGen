try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-1) and f(-3))
    
except: print('error')
