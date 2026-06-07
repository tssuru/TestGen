try:
    a,b,c=7,3,9
    def g(b):
        global c
        a*=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,2,5
    print(g(a),a,b,c)
    
except: print('error')
