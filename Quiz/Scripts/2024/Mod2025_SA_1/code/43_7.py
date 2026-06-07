try:
    def f(d):
        x=49
        if d>3: 
            return 2
        elif d!=0:
             x=6
        else:
             return 8
        return x
    
    print(f(-9))
except: print('error')
