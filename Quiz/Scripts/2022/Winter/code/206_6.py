try:
    a,b,c=7,4,3
    def h(a):
        global c
        a=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=1,9,6
    print(h(b),a,b,c)
    
except: print('error')
