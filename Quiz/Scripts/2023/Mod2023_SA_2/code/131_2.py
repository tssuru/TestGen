try:
    a,b,c=9,3,0
    def h(a):
        global c
        a=3
        b*=2
        c=1
        return a+b+c
    
    a,b,c=2,6,5
    print(h(b),a,b,c)
    
except: print('error')
