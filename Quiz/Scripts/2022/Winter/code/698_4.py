try:
    def f(d):
        v=68
        if d: 
            v=0
        if d<=4:
             return 5
        else:
             return 6
        return v
    
    print(f(5))
    
except: print('error')
