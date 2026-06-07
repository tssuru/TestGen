try:
    def f(d):
        x=73
        if d: 
            return 1
        elif d<=5:
             return 9
        else:
             x=6
        return x
    
    print(f(7))
    
except: print('error')
