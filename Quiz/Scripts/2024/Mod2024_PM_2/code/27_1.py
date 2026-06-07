try:
    a,b,c=7,0,5
    def g(b):
        global c
        a-=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=6,2,4
    print(g(a),a,b,c)
    
except: print('error')
