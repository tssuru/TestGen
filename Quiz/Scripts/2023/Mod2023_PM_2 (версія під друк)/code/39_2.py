try:
    a,b,c=5,4,9
    def h(a):
        global c
        a=5
        b*=3
        c=4
        return a+b+c
    
    a,b,c=2,5,7
    print(h(b),a,b,c)
    
except: print('error')
