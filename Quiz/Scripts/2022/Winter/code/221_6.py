try:
    a,b,c=6,2,7
    def g(b):
        global c
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,5,3
    print(g(a),a,b,c)
    
except: print('error')
