try:
    def f(d):
        y=49
        if d: 
            return 5
        elif d>=2:
             y=3
        else:
             y=7
        return y
    
    print(f(-9))
    
except: print('error')
