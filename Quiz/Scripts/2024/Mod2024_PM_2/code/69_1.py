try:
    a,b,c=8,6,0
    def h(b):
        a=2
        b-=5
        c=5
        return a+b+c
    
    a,b,c=2,4,8
    print(h(b),a,b,c)
    
except: print('error')
