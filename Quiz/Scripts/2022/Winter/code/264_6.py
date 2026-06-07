try:
    a,b,c=1,9,5
    def h(b):
        global c
        a=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,6,4
    print(h(b),a,b,c)
    
except: print('error')
