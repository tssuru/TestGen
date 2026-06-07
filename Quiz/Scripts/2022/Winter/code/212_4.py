try:
    def f(a,b):
        c=42
        if a>2:
            return 9
        elif b>=4:
             c=3
        else: 
            return 5
        return c
    
    print(f(5,6))
    
except: print('error')
