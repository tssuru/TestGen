try:
    def h(d):
        y=64
        if d>=3: 
            return 7
        elif d>-5:
             y=0
        else:
             return 2
        return y
    
    print(h(-5))
    
except: print('error')
