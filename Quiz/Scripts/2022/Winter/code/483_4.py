try:
    def h(b):
        y=98
        if b: 
            y=7
        elif b>-5:
             return 9
        else:
             return 1
        return y
    
    print(h(4))
    
except: print('error')
