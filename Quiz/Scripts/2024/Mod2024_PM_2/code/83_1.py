try:
    a,b,c=7,5,3
    def h(a):
        global c
        a=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,6,1
    print(h(b),a,b,c)
    
except: print('error')
