try:
    
    def f(n):
        print("f", end="");
        return n
    
    print(f(2) and f(6))
    
except: print('error')
