try:
    a,b,c=9,1,6
    def g(b):
        global c
        a=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=7,6,1
    print(g(a),a,b,c)
    
except: print('error')
