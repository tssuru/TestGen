try:
    def f(c):
        v=44
        if c: 
            return 1
        if c!=-1:
             v=3
        else:
             return 5
        return v
    
    print(f(-5))
    
except: print('error')
