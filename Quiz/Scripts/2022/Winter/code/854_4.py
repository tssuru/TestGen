try:
    def f(b):
        v=29
        if b: 
            return 7
        elif b<=1:
             v=8
        else:
             return 3
        return v
    
    print(f(-9))
    
except: print('error')
