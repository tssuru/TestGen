try:
    a,b,c=4,0,2
    def g(b):
        global c
        a=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,3,9
    print(g(a),a,b,c)
    
except: print('error')
