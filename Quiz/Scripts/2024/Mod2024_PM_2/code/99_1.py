try:
    a,b,c=9,2,2
    def g(b):
        global c
        a*=5
        b=5
        c=4
        return a+b+c
    
    a,b,c=7,1,6
    print(g(a),a,b,c)
    
except: print('error')
