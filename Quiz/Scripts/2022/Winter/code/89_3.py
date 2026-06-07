try:
    
    def f(n):
        print("f", end="");
        return n<=-1
    
    print(f(9) and f(-2))
    
except: print('error')
