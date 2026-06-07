try:
    a,b,c=4,0,2
    def g(b):
        global c
        a+=2
        b=5
        c=2
        return a+b+c
    
    a,b,c=9,0,2
    print(g(a),a,b,c)
    
except: print('error')
