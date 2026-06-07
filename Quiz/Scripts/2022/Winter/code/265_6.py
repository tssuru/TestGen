try:
    a,b,c=2,7,3
    def g(b):
        global c
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=8,0,5
    print(g(a),a,b,c)
    
except: print('error')
