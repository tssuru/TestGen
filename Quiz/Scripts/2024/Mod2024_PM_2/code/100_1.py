try:
    a,b,c=5,9,8
    def h(b):
        a=2
        b-=1
        c=3
        return a+b+c
    
    a,b,c=3,4,0
    print(h(b),a,b,c)
    
except: print('error')
