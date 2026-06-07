try:
    def f(c):
        v=25
        if c>-5: 
            v=7
        elif c!=3:
             return 4
        else:
             v=6
        return v
    
    print(f(-6))
    
except: print('error')
