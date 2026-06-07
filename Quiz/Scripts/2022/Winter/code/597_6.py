try:
    a,b,c=1,6,0
    def g(b):
        global c
        a=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=3,4,7
    print(g(a),a,b,c)
    
except: print('error')
