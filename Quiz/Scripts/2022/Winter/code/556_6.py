try:
    a,b,c=1,3,0
    def h(b):
        global c
        a=2
        b*=3
        c=5
        return a+b+c
    
    a,b,c=9,5,7
    print(h(b),a,b,c)
    
except: print('error')
