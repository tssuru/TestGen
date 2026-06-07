try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-3) and f(-5))
    
except: print('error')
