try:
    def h(a):
        x=42
        if a>3: 
            x=4
        elif a!=0:
             return 2
        else:
             x=5
        return x
    
    print(h(0))
    
except: print('error')
