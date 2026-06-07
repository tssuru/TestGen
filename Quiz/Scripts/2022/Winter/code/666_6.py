try:
    a,b,c=2,4,5
    def h(b):
        global c
        a=4
        b=1
        c=1
        return a+b+c
    
    a,b,c=1,6,5
    print(h(b),a,b,c)
    
except: print('error')
