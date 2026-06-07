try:
    a,b,c=6,8,0
    def h(b):
        a=3
        b*=4
        c=5
        return a+b+c
    
    a,b,c=3,1,5
    print(h(b),a,b,c)
except: print('error')
