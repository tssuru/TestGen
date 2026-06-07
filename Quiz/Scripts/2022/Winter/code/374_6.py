try:
    a,b,c=2,5,4
    def h(a):
        global c
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=1,3,6
    print(h(b),a,b,c)
    
except: print('error')
