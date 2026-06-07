try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(-3) and f(7))
    
except: print('error')
