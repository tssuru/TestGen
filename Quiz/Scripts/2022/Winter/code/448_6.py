try:
    a,b,c=7,2,3
    def h(a):
        global c
        a=1
        b+=2
        c=4
        return a+b+c
    
    a,b,c=1,4,1
    print(h(b),a,b,c)
    
except: print('error')
