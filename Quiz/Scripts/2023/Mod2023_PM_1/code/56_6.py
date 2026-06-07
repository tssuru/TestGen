try:
    
    def f(n):
        print("f", end="");
        return n<=0
    
    print(f(7) and f(-1))
    
except: print('error')
