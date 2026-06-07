try:
    a,b,c=8,5,3
    def h(b):
        global c
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=6,7,1
    print(h(a),a,b,c)
    
except: print('error')
