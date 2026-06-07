try:
    a,b,c=6,1,3
    def g(b):
        global c
        a=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=2,2,4
    print(g(a),a,b,c)
    
except: print('error')
