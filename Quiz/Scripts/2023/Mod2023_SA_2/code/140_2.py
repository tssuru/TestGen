try:
    a,b,c=7,9,2
    def h(a):
        a-=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,3,6
    print(h(b),a,b,c)
    
except: print('error')
