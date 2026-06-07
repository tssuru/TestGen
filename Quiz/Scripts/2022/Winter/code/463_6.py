try:
    a,b,c=9,8,0
    def h(a):
        a=3
        b-=4
        c=5
        return a+b+c
    
    a,b,c=3,4,6
    print(h(b),a,b,c)
    
except: print('error')
