try:
    a,b,c=0,7,6
    def g(b):
        global c
        a+=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=7,3,0
    print(g(a),a,b,c)
    
except: print('error')
