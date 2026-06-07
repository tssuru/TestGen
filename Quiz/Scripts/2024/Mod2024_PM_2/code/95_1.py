try:
    a,b,c=4,9,0
    def h(b):
        global c
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=2,5,1
    print(h(b),a,b,c)
    
except: print('error')
