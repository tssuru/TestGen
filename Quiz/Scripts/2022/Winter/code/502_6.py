try:
    a,b,c=4,6,3
    def h(a):
        global c
        a=4
        b*=2
        c=4
        return a+b+c
    
    a,b,c=2,5,6
    print(h(b),a,b,c)
    
except: print('error')
