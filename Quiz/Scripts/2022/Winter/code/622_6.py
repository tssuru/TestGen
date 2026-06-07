try:
    a,b,c=3,9,4
    def g(b):
        global c
        a*=1
        b=5
        c=5
        return a+b+c
    
    a,b,c=7,3,9
    print(g(a),a,b,c)
    
except: print('error')
