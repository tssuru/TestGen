try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(6) and f(-6))
    
except: print('error')
