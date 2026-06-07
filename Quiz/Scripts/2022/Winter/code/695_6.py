try:
    a,b,c=2,7,1
    def h(a):
        global c
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=4,9,6
    print(h(b),a,b,c)
    
except: print('error')
