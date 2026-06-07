try:
    a,b,c=9,0,8
    def h(b):
        global c
        a=5
        b+=1
        c=4
        return a+b+c
    
    a,b,c=6,5,1
    print(h(b),a,b,c)
    
except: print('error')
