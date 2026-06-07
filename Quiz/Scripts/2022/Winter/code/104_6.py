try:
    a,b,c=5,1,0
    def h(b):
        global c
        a+=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=7,2,9
    print(h(b),a,b,c)
    
except: print('error')
